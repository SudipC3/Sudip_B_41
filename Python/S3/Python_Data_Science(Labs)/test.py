import tensorflow as tf
from tensorflow.keras import layers, models
import numpy as np
import matplotlib.pyplot as plt
from PIL import Image
import io
import ipywidgets as widgets
from IPython.display import display

# Load the Flowers dataset (same as before)
batch_size = 32
img_height = 180
img_width = 180
data_dir = r"C:\Users\anupa\OneDrive\Desktop\Assignment_Sem-3\Python\flowers"  # Replace with your dataset path

# Load training dataset (to get class names)
train_ds = tf.keras.preprocessing.image_dataset_from_directory(
    data_dir,
    validation_split=0.2,
    subset="training",
    seed=123,
    image_size=(img_height, img_width),
    batch_size=batch_size)

# Get class names before applying any map transformations
class_names = train_ds.class_names

# Normalize images (after getting class names)
normalization_layer = layers.experimental.preprocessing.Rescaling(1./255)
train_ds = train_ds.map(lambda x, y: (normalization_layer(x), y))

# Build and train the MLP model (assuming the training has already been done)
model = models.Sequential([
    layers.Flatten(input_shape=(img_height, img_width, 3)),
    layers.Dense(128, activation='relu'),
    layers.Dense(64, activation='relu'),
    layers.Dense(5, activation='softmax')  # 5 flower classes
])
model.compile(optimizer='adam', loss='sparse_categorical_crossentropy', metrics=['accuracy'])

# Dummy: Assume model is already trained (you can load a trained model if you have one)

# Function to preprocess the image
def preprocess_image(image):
    image = image.resize((img_height, img_width))  # Resize the image
    image_array = np.array(image) / 255.0  # Normalize the image
    image_array = np.expand_dims(image_array, axis=0)  # Add batch dimension
    return image_array

# Function to predict the flower class
def predict_flower(image):
    processed_image = preprocess_image(image)
    prediction = model.predict(processed_image)
    predicted_class = np.argmax(prediction)
    return class_names[predicted_class]

# Function to handle image upload and prediction
def on_upload_change(change):
    uploaded_file = change['new']
    if uploaded_file:
        # Load the image
        img = Image.open(io.BytesIO(uploaded_file[0]['content']))
        
        # Display the image
        display(img)
        
        # Make prediction
        flower_class = predict_flower(img)
        
        # Display the predicted class
        print(f"Predicted flower class: {flower_class}")

# Create the file uploader widget
uploader = widgets.FileUpload(accept='image/*', multiple=False)
uploader.observe(on_upload_change, names='value')

# Display the uploader widget
display(uploader)
