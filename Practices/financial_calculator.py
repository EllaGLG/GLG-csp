#GLG financial calculator period 7
def category():
    print(f"What is your montly{category}?")
    return income, rent, utilities, groceries, transportation
    
def percent_of_income(amount, income):
return (amount/income) * 100 

income, rent, utilities, groceries, transportation = user_input()



print(f"\nYour rent is ${rent:.2f} and that is {rent_pct:.0f}% of your income.")
print(f"Your utilities are ${utilities:.2f} and that is {utilities_pct:.0f}% of your income.")
print(f"Your groceries are ${groceries:.2f} and that is {groceries_pct:.0f}% of your income.")
print(f"Your transportation is ${transportation:.2f} and that is {transportation_pct:.0f}% of your income.")

print(f"\nYou should save ${savings:.2f} a month, that is {savings_pct:.0f}% of your income.")
print(f"\nYou have ${spending_money:.2f} of spending money each month!")