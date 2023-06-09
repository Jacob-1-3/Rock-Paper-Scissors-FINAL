## Rock-Paper-Scissors-FINAL

## Game Rules:
The rules are simple. If you ress the right button you will play paper, if you press the left button you will play rock, and if you press both buttons you will play scissors. Susan (the robot) will randomly play rock paper or scissors immediately after you. Defining the winner is simple.
Rock beats Scissors,
Scissors beats Paper,
Paper beats Rock,
and any same play results in a tie
Can you beat the robot (ie. Susan)?
Play as many times as you would like the first to 5 wins is the ultimate winner!!

## Input / Output:
switch: change, turns game on or off
left button: press down (decreasing), Prints ”PLAYER: rock," Randomly generates computers play, Serial Monitor, Low frequency sound and purple LED
right button: press down (decreasing), Prints ”PLAYER: paper," Randomly generates computers play, Serial Monitor, Medium frequency sound and green LED
both buttons:  press down (decreasing), Prints ”PLAYER: scissors," Randomly generates computers play, Serial Monitor, High frequency sound and red LED

## Scoring System:

The base 3 x 3 matrix demonstrating the score of rock paper scissors between two
players is shown below.

                    User
                 (R) (P) (S)
              (R) 0  -1   1
      U x S = (P) 1   0  -1 Susan
              (S) -1  1   0
         
In this matrix the two players' scores can be recorded: a win results in plus one, a tie ends
with zero, and a loss results in negative one. This is the definition of a zero-sum game where
the result is always a reward for one player and an equivalent loss for the other player.
Furthermore, the matrix shows each possible outcome or combination of moves



