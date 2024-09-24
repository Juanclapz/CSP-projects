print("Hello, and welcome to your financial calculator!\n")
income = int(input("What is your monthly income?: "))
rent = int(input("What is your monthly rent: "))
utilities = int(input("What is your monthly utilities: "))
groceries = int(input("What is your monthly groceries: "))
transportation = int(input("What does your monthly transportation cost: "))
expenses = rent + utilities + transportation + groceries
savings = income *.2
total = income - savings - expenses
print("Your monthly income is $",income)
print("Your monthly expenses are $",expenses)
print("Your monthly savings are $",savings)
print("You have $",total, "left to spend")
prent = rent/income*100
putilities = utilities/income*100
pgroceries = groceries/income*100
ptransportation = transportation/income*100
pexpenses = expenses/income*100
psavings = income/savings*100
pexpenses = expenses/income*100
print("Your rent is",prent,"% of your monthly income")
print("Your utilities are",putilities, "% of your monthly income")
print("Your groceries are",pgroceries, "% of your monthly income")
print("Your transportation is",ptransportation,"of your monthly income")
print("Your savings are",psavings,"% of your monthly income")
print("Your expenses are",pexpenses,"% of your income")