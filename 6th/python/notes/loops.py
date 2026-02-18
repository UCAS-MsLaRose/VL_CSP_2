import random #library imported at the top
start = 0

while start <= 20:
    print(start)
    start += 1

print("The loop is over")

goose = random.randint(1,25)
count = 1

while count != goose:
    print("Duck")
    count += 1

print("GOOSE!")

number = random.randint(1,20)

while True:
    guess = int(input("Tell me a number between 1 and 20: "))
    if guess == number:
        print(f"You won! The number was {number}!")
        break
    elif guess < number:
        print("Guess higher")
    else:
        print("Guess lower")