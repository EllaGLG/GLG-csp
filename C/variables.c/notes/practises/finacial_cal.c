#include <stdio.h>

int main() {

    float income, rent, utilities, groceries, transportation;
    float savings_percent, savings, spending;
    float rent_percent, utilities_percent, groceries_percent, transportation_percent, savings_percent_of_income;

   
    printf("What is your monthly income: $ ");
    scanf("%f", &income);

  
    printf("What is your monthly rent/mortgage: $ ");
    scanf("%f", &rent);

    printf("What are your monthly utilities: $ ");
    scanf("%f", &utilities);

    printf("What are your monthly groceries: $ ");
    scanf("%f", &groceries);

    printf("What is your monthly transportation: $ ");
    scanf("%f", &transportation);


    printf("What percentage of your income would you like to save? ");
    scanf("%f", &savings_percent);

    savings = income * (savings_percent / 100);

    spending = income - rent - utilities - groceries - transportation - savings;

    rent_percent = (rent / income) * 100;
    utilities_percent = (utilities / income) * 100;
    groceries_percent = (groceries / income) * 100;
    transportation_percent = (transportation / income) * 100;
    savings_percent_of_income = (savings / income) * 100;


    printf("\n--- Monthly Financial Summary ---\n\n");

    printf("Rent: $%.2f (%.0