#GLG financial calculator

Montly_income = float(input("Enter your monthly income: "))

Rent = float(input("Enter your monthly rent: "))

Utilities = float(input("Enter your monthly utilities cost: "))

Groceries = float(input("Enter your monthly groceries cost: "))

Transportation = float(input("Enter your monthly transportation cost: "))

rent_percent = (rent / income) * 100

utilities_percent = (utilities / income) * 100

groceries_percent = (groceries / income) * 100

transportation_percent = (transportation / income) * 100

print("Your rent is $", rent, "and that is", rent_percent, "% of your income.")

print("Your utilities are $", utilities, "and that is", utilities_percent, "% of your income.")

print("Your groceries are $", groceries, "and that is", groceries_percent, "% of your income.")

print("Your transportation is $", transportation, "and that is", transportation_percent, "% of your income.")

savings = income * 0.10
print("You should save $", savings, "a month, that is 10% of your income.")

leftover = income - (rent + utilities + groceries + transportation + savings)
print("You have $", leftover, "of spending money each month!")