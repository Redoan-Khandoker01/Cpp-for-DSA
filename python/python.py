import random
import time

def print_slow(text):
    for char in text:
        print(char, end="", flush=True)
        time.sleep(0.02)
    print()

def intro():
    print_slow("Welcome to the Number Guessing Game!")
    print_slow("I'm thinking of a number between 1 and 100.")
    print_slow("Try to guess it in as few attempts as possible.\n")

def get_guess():
    while True:
        try:
            guess = int(input("Enter your guess: "))
            if 1 <= guess <= 100:
                return guess
            else:
                print("Please enter a number between 1 and 100.")
        except ValueError:
            print("Invalid input! Enter a valid integer.")

def play_game():
    secret_number = random.randint(1, 100)
    attempts = 0

    while True:
        guess = get_guess()
        attempts += 1

        if guess < secret_number:
            print("Too low! Try again.\n")
        elif guess > secret_number:
            print("Too high! Try again.\n")
        else:
            print_slow(f"🎉 Correct! You guessed the number in {attempts} attempts.")
            break

def main():
    intro()
    play_game()

if __name__ == "__main__":
    main()
