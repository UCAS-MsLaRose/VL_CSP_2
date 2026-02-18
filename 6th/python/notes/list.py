numbers = [1,68413,51896,13,219,81,35,62,16,46,314,6,354]
names = ["Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"]

print(len(names))
names[0] = "Eric"
names.append("Jayshree") #adds to the end of the list
index = names.index("Vienna")
names.pop(index) #removes item from the list based on index (or the end if no index is given)
print(names)

for name in names: 
    print(f"Hello {name}")

for number in numbers:
    print(f"{number} - 10 = {number-10}")

#iteration => repetition 
for i in range(20):
    print(f"My code has iterated {i} times")