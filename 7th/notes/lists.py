numbers =[3,1,61,65,16,51,64,35,1489,4,651,321]
names = ["Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"]

names[0] = "Alexander"
names.append("Jayshree") #adds to end of the list
index = names.index("Vienna")
names.pop(index)
print(len(names))
print(names)

for name in names:
    print(f"Hello {name}")

for number in numbers:
    print(f"{number} - 10 = {number-10}")

for i in range(20):
    print(f"this is the {i} iteration of this loop")