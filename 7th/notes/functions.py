def hello():
    print("Hello World!")

def full_name(first, last):
    hello()
    return f"{first} {last}"

hello()
print(full_name("Vienna", "LaRose"))
name = full_name("Tia", "LaRose")
print(f"{name} doesn't like {full_name('Annabeth', 'Chase')}")


def factoral(number):
    total = 1
    for i in range(1, number +1):
        total *= i
    return total

for num in range(1,10):
    print(f"The factoral of {num} is {factoral(num)}")

name = "Ms. LaRose"

def admin():
    print(f"{name} is the admin for the lab!")

admin()