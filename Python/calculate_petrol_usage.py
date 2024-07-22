def calculate_petrol_usage(distance, average):
    petrol_price = 109  # Price of petrol per liter in INR
    litres_used = distance / average
    amount_inr = litres_used * petrol_price
    return litres_used, amount_inr


distance = float(input("Enter the distance in kilometers: "))
average = float(input("Enter the average of the vehicle in kilometers per liter: "))

litres, amount = calculate_petrol_usage(distance, average)

print(f"Litres of petrol used: {litres} L")
print(f"Amount in INR: {amount} INR")
