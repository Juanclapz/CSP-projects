
print("Hello, and welcome to your financial calculator!\n")
income=float(input("What is your monthly income: "))
rent=float(input("What is your monthly rent: "))
utilities=float(input("What is your monthly utilities: "))
groceries=float(input("What is your monthly groceries: "))
transportation=float(input("What is your monthly transportation costs: "))
savings = income *.2
expenses = rent+utilities+groceries+transportation
spending = income-expenses-savings
def percent(type, amount):
    per = amount/income *100

    return f"Your {type} is {per}% income."

print(f"Your monthly income is ${income:.2f}\n")
print(f"Your monthly expenses are ${expenses:.2f}\n")
print(f"Your monthly savings is ${savings:.2f}\n")
print(f"Your monthly spending money is ${spending:.2f}\n")
percent("rent", rent)
percent("utilities", utilities)
percent("groceries", groceries)
percent("transportation", transportation)
percent("savings", savings)
percent("expenses", expenses)