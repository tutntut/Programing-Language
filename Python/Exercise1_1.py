import random

def guessing_game():
    answer = random.randint(1,100)
    while True:
        guess = int(input("guess the answer : "))
        if(guess > answer): {
            print("too high!")
        }
        elif(guess < answer): {
            print("too low!")
        }
        else:
            print("correct!")
            break
    
guessing_game()