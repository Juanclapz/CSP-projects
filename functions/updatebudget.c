#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, expenses, spend;

float input(char type[], float var){
  printf("Monthly %s:\n", type);
  scanf("%f", &var);
  return var;
}

void percent(char type[], int amount){
  int per = amount/income *100;

printf("Your %s is %d%% of your income.\n", type, per);
}

int main(void){

  printf("This is your budget calculator.\n");
  income = input("income", income);
  rent = input("rent", rent);
  utilities = input("utilities", utilities);
  groceries = input("groceries", groceries);
  transportation = input("trancportation", transportation);
  savings = income * .2;
  expenses = rent + utilities + groceries + transportation;
  spend = income - expenses - savings;
  printf("You make $%.2\n", income);
  printf("Your expenses are $%.2\n", expenses);
  printf("Your savings are $%.2\n", savings);
  printf("Your spending money is $%.2\n", spend);
  percent("rent", rent);
  percent("utilities", utilities);
  percent("groceries", groceries);
  percent("transportation", transportation);
  percent("expenses", expenses);
  percent("savings", savings);
  return 0;
}