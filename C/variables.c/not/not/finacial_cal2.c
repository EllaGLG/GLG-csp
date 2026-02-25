// GLG period 7 financial_calculator.c
#include <stdio.h>

float money(char prompt[]) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}


float get_percent(float income, float expense) {
    return (expense / income) * 100;
}

void print_category(char name[], float income, float amount) {
    float percent = get_percent(income, amount);
    printf("Your %s is $%.2f and that is %.0f%% of your income.\n",
           name, amount, percent);
}

int main() {

    
    float income = money("What is your monthly income: $ ");

   
    float rent = money("What is your monthly rent/mortgage: $ ");
    float utilities = money("What are your monthly utilities: $ ");
    float groceries = money("What are your monthly groceries: $ ");
    float transportation = money("What is your monthly transportation: $ ");

    
    float savings_percent = money("What percentage of your income would you like to save? ");
    float savings = income * (savings_percent / 100);

    
    float spending = income - rent - utilities - groceries - transportation - savings;

    printf("\n Monthly Financial Summary \n\n");

    print_category("rent", income, rent);
    print_category("utilities", income, utilities);
    print_category("groceries", income, groceries);
    print_category("transportation", income, transportation);
    print_category("savings", income, savings);

    printf("\nYou have $%.2f of spending money each month!\n", spending);

    return 0;
}
