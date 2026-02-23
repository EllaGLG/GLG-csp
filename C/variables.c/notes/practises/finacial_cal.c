// GLG, period 7th, finacial calculator 

#include <stdio.h>

int main(){

def money(prompt);
    return round(float(input(prompt)), 2);


def get_percent(income, expense);
    return round((expense / income) * 100);


def print_categoryf(name, income, amount);
    int = get_percent(income, amount );
    printf("Your {name} is ${amount:.2f} and that is {percent}% of your income");



int income = money("What is your monthly income: $ ");

int rent = money("What is your monthly rent/mortgage: $ ");

int utilities = money("What are your monthly utilities: $ ");

int groceries = money("What are your monthly groceries: $ ");

int transportation = money("What is your monthly transportation: $ ");

int savings_percent = money("What percentage of your income would you like to save? ");

int savings = round(income * (savings_percent / 100), 2);

int spending = round(
    income - rent - utilities - groceries - transportation - savings, 2
);


print_categoryf("rent", income, rent);

print_categoryf("utilities", income, utilities);

print_categoryf("groceries", income, groceries);

print_categoryf("transportation", income, transportation);

print_categoryf("savings", income, savings);

printf("You have ${spending:.2f} of spending money each month!");

    return 0;
}