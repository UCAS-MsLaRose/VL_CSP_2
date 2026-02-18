"""number = 1000

if number < 10 and number >= -9:
    print(f"{number} is a single digit number")
elif number < 100:
    print(f"{number} is a double digit number")
else:
    print(f"{number} is a triple digit number")
    print(". . . .or is it?")
    new_number = number*number
    if new_number > 1000:
        print(f"Surprise number {new_number}")"""

name = input("What is your name: ").strip().capitalize()

if name == "Arthur":
    print("Hello King Arthur")
    quest = input("What is your quest? ").strip().title()
    if quest == "Holy Grail":
        print("Good Luck")
    else:
        print(f"{quest} is a lame quest")
else:
    print(f"Hello {name}. You are not a king.")


print("This is the end of the code")