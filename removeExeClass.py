import os

def delete_files():
    current_dir = os.getcwd() 
    deleted = False  

    for root, _, files in os.walk(current_dir):
        for file in files:
            if file.endswith(('.exe', '.class')):  
                file_path = os.path.join(root, file)
                print(f"Deleting: {file_path}")
                os.remove(file_path)  
                deleted = True

    if not deleted:
        print("No .exe or .class files found.")
    else:
        print("Operation completed successfully!")

if __name__ == "__main__":
    delete_files()
