# List of ages
ages = [19, 22, 19, 24, 20, 25, 26, 24, 25, 24]

# Sort the list and find the min and max age
ages.sort()
min_age = ages[0]
max_age = ages[-1]

print("Sorted ages:", ages)
print("Min age:", min_age)
print("Max age:", max_age)

# Add the min age and the max age again to the list
ages.extend([min_age, max_age])
print("List after adding min and max again:", ages)

# Find the median age
n = len(ages)
if n % 2 == 0:
    median_age = (ages[n//2 - 1] + ages[n//2]) / 2
else:
    median_age = ages[n//2]

print("Median age:", median_age)

# Calculate the average age
average_age = sum(ages) / len(ages)
print("Average age:", average_age)

# Calculate the range of ages
age_range = max_age - min_age
print("Range of ages:", age_range)

# Calculate the difference between the min/max ages and the average age
min_diff = abs(min_age - average_age)
max_diff = abs(max_age - average_age)

print("Difference between min and average:", min_diff)
print("Difference between max and average:", max_diff)
