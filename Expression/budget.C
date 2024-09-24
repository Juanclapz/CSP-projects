#include<stdio.h>

int main(void){
   float income, rent, utilities, groceries, transportation, expenses, savings, total;
   float prent, putilities, pgroceries, ptransportation, pexpenses;
   printf("This is going to calculate your budget for the month\n");
   printf("How much do you make a month?\n");
   scanf("%f", &income);
   printf("How much is rent?\n");
   scanf("%f", &rent);
   printf("How much is utilities?\n");
   scanf("%f", &utilities);
   printf("How much are groceries?\n");
   scanf("%f", &groceries);
   printf("How much is transportation?\n");
   scanf("%f", &transportation);
   expenses = rent + utilities + groceries + transportation;
   savings = income *.2;
   total = income - expenses - savings;
   prent = rent/income*100;
   putilities = utilities/income*100;
   pgroceries = groceries/income*100;
   ptransportation = transportation/income*100;
   pexpenses = expenses/income*100;
   printf("Your income is: $%.2f\n", income);
   printf("Your expenses are: $%.2f\n,", expenses);
   printf("Your savings are: $%.2f\n,", savings);
   printf("Your total is: $%.2f\n,", total);
   printf("Your rent is %.2f%% of your income\n", prent);
   printf("Your utilities are %.2f%% of your income\n" , putilities);
   printf("Your groceries are %.2f%% of your income\n", pgroceries);
   printf("Your transportation is %.2f%% of your income\n", ptransportation);
   return 0;
}