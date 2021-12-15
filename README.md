# Kake Virtual Game Center
by Jacob Nussbaum and Kevin Cho
for CS 102 Section C Fall 2021

## Introduction
Our final C project is a virtual game center with algorithms focused on mathematics and number guessing. There are five games in total:

One game is called AgeGuesser. In this game, the user thinks of their age. The computer asks them to do various, complex mathematical operations with the different digits of their age. After doing all the math, the user arrives at a number with infinite decimals. The user is asked to input that number to five decimal places. After entering that number, the algorithm subtracts a complex fraction from that number, and then uses a while loop involving remainders to reverse the new number it gets. That number will be the user’s age.

Another game is called PickUpBricks. In this game, there are 101 virtual bricks to start with. The user and the computer take turns removing anywhere between 1 and 9 bricks at a time. Whoever has to pick up the last brick loses the game. This game involves complex math because if the user wants to win, they must plan their moves ahead accordingly. The computer uses a random number generator to remove a random number of bricks each turn, though, so the moves are immensely difficult to predict, making this game challenging and exciting!

Another one of our games is called GuessThatNumber. The computer generates a random number between 1 and 100. The user gets 3 attempts at guessing the number. If the user does not guess it, the computer wins the game. If the user does guess it, the user wins the game.

The fourth game is called 21KaratMagic. In this game, the computer uses arrays to present the user with 21 different numbers, divided into 3 columns. Then, the user picks one of those numbers and focuses on it. The user is asked to input which column their number is in. Then, the numbers swap places, and the user is asked again to input which column their number is in now. That happens one more time, and then the computer guesses which number the user was thinking of. While it may seem like magic, it is indeed several different switch statements and a cleverly-planned algorithm that are achieving the right answer.

Finally, in order to complete the virtual game center, we added a MadLibs game. The user enters various inputs, such as nouns and celebrity names, and then the computer generates a hilarious story based on the user’s inputs. 





## Link to YouTube video recording of presentation and code walk through.
https://youtu.be/3TY5YIn5rEs
