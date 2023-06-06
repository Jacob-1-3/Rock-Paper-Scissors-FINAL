# Rock-Paper-Scissors-FINAL

Game Rules:
Press the right button to play paper. Press the left button to play rock.
Press both buttons to play scissors.
Rock beats Scissors.
Scissors beats Paper
Paper beats Rock
Any same play results in a tie
Can you beat the robot (ie. Susan)?

Input / Output:
switch: change, turns game on or off
left button: press down (decreasing), Prints ”PLAYER: rock," Randomly generates computers play, Serial Monitor, Low frequency sound and purple LED
right button: press down (decreasing), Prints ”PLAYER: paper," Randomly generates computers play, Serial Monitor, Medium frequency sound and green LED
both buttons:  press down (decreasing), Prints ”PLAYER: scissors," Randomly generates computers play, Serial Monitor, High frequency sound and red LED

Scoring System:

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



