# Define the student dictionary
student = {
    'first_name': 'Sudip',
    'last_name': 'Bakuli',
    'gender': 'Male',
    'age': 21,
    'marital_status': 'Single',
    'skills': ['React Js', 'Web Development'],
    'country': 'India',
    'city': 'Howrah',
    'address': 'Naskarpur'
}


# Get the length of the student dictionary
length_of_student_dict = len(student)
print("Length of the student dictionary:", length_of_student_dict)

# Access and print the skills
skills = student['skills']
print("Skills:", skills)
print("Data type of skills:", type(skills))

# Modify the skills list
student['skills'].extend(['Cloud Computing', 'Backend Development'])
print("Modified skills:", student['skills'])

# Get and print the dictionary keys
keys_list = list(student.keys())
print("Dictionary keys:", keys_list)

# Get and print the dictionary values
values_list = list(student.values())
print("Dictionary values:", values_list)

# Get and print the dictionary items as a list of tuples
student_items = list(student.items())
print("List of tuples (items):", student_items)

# Delete the 'marital_status' key from the dictionary
del student['marital_status']
print("Dictionary after deleting 'marital_status':", student)

# Delete the entire student dictionary
del student

# Attempt to print the student dictionary after deletion
try:
    print(student)
except NameError:
    print("The student dictionary has been deleted.")
