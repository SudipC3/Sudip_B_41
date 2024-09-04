# Dictionary mapping months to seasons
seasons = {
    1: 'Winter', 2: 'Winter', 3: 'Spring',
    4: 'Summer', 5: 'Summer', 6: 'Summer',
    7: 'Monsoon', 8: 'Monsoon', 9: 'Autumn',
    10: 'Autumn', 11: 'Autumn', 12: 'Winter'
}

# Get month number from user
month = int(input("Enter the month number (1-12): "))

# Check if the month number is valid
if month < 1 or month > 12:
    print("Invalid month number")
else:
    # Retrieve the season for the given month
    season = seasons.get(month, 'Invalid month number')
    print("The season is:", season)
