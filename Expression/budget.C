#include<stdio.h>

int main(void){
   float income, rent, utilities, groceries, transportation, expenses, savings, total;
   float prent, putilities, pgroceries, ptransportation, pexpenses;
   printf("This is going to calculate your budget for the month\n");
   printf("How much do you make a month?\n");
   scanf("%f", &income);
   printf("Your income is: $%.2f\n", income);
   printf("How much is rent?\n");
   scanf("%f", &rent);
   printf("How much is utilities?\n");
   scanf("%f", &utilities);
   printf("How much are groceries?\n");
   scanf("%f", &groceries);
   printf("How much is transportation?\n");
   scanf("%f", &transportation);
   printf("How much are expenses?\n");
   scanf("%f", &expenses);
   printf("Your expenses are: %%.2f\n, expenses");
   expenses = rent + utilities + groceries + transportation;
   savings = income *.2;
   total = income - expenses - savings;
   prent = rent/income;
   putilities = utilities/income;
   pgroceries = groceries/income;
   ptransportation = transportation/income;
   pexpenses = expenses/income;
   printf("Your income is: $%.2f\n", income);
   printf("Your expenses are: $%.2f\n,", expenses);
   printf("Your savings are: $%.2f\n,", savings);
   printf("Your total is: $%.2f\n,", total);
   printf("Your rent is %.2f", prent, "of your income");
   printf("Your utilities are %.2f", putilities, "of your income");
   return 0;
}