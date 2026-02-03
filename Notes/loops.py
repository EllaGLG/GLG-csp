#GLG loops.py period 7
import random#library code someone else wrote< always import at the top

start = 18

while start >= 1:
    print(start)
    start -= 2

goose = random.randint(1,20)
count = 1

while count < goose:
    print("Duck")
    count += 1
print("GOOSE!")

number = random.randint(1,25)

while True:
    guess = int(input("guess a number between 1 and 25: "))
    if guess == number:
        print(f"congradulations!{number} was the number!")
        break #exit the loop
    elif guess > 25 or guess < 1:
        print("that isn't an option.")
    elif guess < number:
for name in name:
    print(f"Hello{name}")

for number in numbers :
    print(f"{number} - 10 = {number-10}")

    for i in range(20):
        print(f"this is the {i} iteraction of this loop")