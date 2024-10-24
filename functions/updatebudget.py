def user_inputs(type):
    return float(input(f"Monthly {type} "))

income = user_inputs("monthly income:\n")
rent = user_inputs("monthly rent:\n")
utilities = user_inputs("monthly utilities cost:\n")
groceries = user_inputs("monthly groceries cost:\n")
transportation = user_inputs("monthly transportation cost:\n")
savings = income *0.2
expenses = rent + utilities + groceries + transportation
spend = income-int(expenses)-savings

def percent(type, amount):
    per = amount / income * 100
    return f"Your {type} is {per}% income\n"

print(f"your monthly income is ${income: .2f}\n")
print(f"your monthly expenses is ${expenses: .2f}\n")
print(f"your monthly savings is ${savings: .2f}\n")
print(f"your monthly spending is ${spend: .2f}\n")
print(percent("rent", rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))
print(percent("transportation", transportation))
print(percent("savings", savings))
print(percent("expenses", expenses))