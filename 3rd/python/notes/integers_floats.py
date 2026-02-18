price = float(input("What is the cost of the item: $"))

tax_rate = float(input("What is the tax percent in your state: %"))

tax_rate_decimal = tax_rate/100

total = price*(1 + tax_rate_decimal)

rounded_total = round(total,2)

print(rounded_total)

"""apples = int("50")

friends = 16

print("Each of my friends can have", apples//friends, "and I will have ", apples%friends, "left over.")"""