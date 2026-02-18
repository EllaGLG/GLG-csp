#GlG period 7 finacial_cal update.py

def money(prompt):
    return round(float(input(prompt)), 2)


def get_percent(income, expense):
    return round((expense / income) * 100)


def print_category(name, income, amount):
    percent = get_percent(income, amount)
    print(f"Your {name} is ${amount:.2f} and that is {percent}% of your income")



income = money("What is your monthly income: $ ")

rent = money("What is your monthly rent/mortgage: $ ")

utilities = money("What are your monthly utilities: $ ")

groceries = money("What are your monthly groceries: $ ")

transportation = money("What is your monthly transportation: $ ")

savings_percent = money("What percentage of your income would you like to save? ")

savings = round(income * (savings_percent / 100), 2)

spending = round(
    income - rent - utilities - groceries - transportation - savings, 2
)


print_category("rent", income, rent)

print_category("utilities", income, utilities)

print_category("groceries", income, groceries)

print_category("transportation", income, transportation)

print_category("savings", income, savings)

print(f"You have ${spending:.2f} of spending money each month!")
