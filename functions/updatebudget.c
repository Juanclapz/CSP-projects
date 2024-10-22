#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, expenses, spend, total;


void percent(char type[], int amount){
  int per = amount/income*100;


  printf("The percent is of your income %s is %d%%.\n", type, per);
}


int main (void){
  float prent, putilities, pgroceries, ptransportation, pexpenses;
  printf("this is going to calculate your budget of the month\n");
  printf("how much you make a month?\n");
  scanf("%f", &income);
  printf("your income is: $%.2f\n", income);
  printf("how much is your rent?\n");
  scanf("%f", &rent);
  printf("how much are your utilities?\n");
  scanf("%f", &utilities);
  printf("how much are groceries\n");
  scanf("%f", &groceries);
  printf("how much is transportation\n");
  scanf("%f", &transportation);
  expenses = rent+utilities+groceries+transportation;
  savings = income*.2;
  printf("your espenses are: $%.2f\n", expenses);
  total = income - expenses - savings;
  printf("your income is: $%.2f\n", income);
  printf("your expenses are: $%.2f\n", expenses);
  printf("your savings are: $%.2f\n", savings);
  printf("your total left to spend is: $%.2f\n", total);
  percent("rent", rent);
  percent("utilities", utilities);
  percent("groceries", groceries);
  percent("transportation", transportation);
  percent("expenses", expenses);
  return 0;
}