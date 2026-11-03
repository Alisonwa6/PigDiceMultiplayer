# Pig Dice (Multi-Player) Version

## Background
After creating a solution for the basic Pig Dice game, we now have an object oriented solution. The next version of this game will 
enhance the Pig Dice game so that it supports multiple players where each person competes against one another to see who can reach 50 points 
in the fewest turns. To accomplish this, you will create a <b>PDGameV2</b> class that will be derived from the <b>PDGame</b> class created in the earlier Pig Dice solution. Derived classes like the <b>PDGameV2</b> class significantly improve reusability of a program through the principle of inheritance. 

You are also being asked to recreate documentation of the projects architecture which show how the classes in the program are related. This is 
especially useful when you are modifying existing code or adding new objects to provide more features to the existing code base.

## Directions
Create a derived class named <b>PDGameV2</b>. The <b>PDGameV2</b> class should include string variables for each players full name, each player's score, and reuse through inheritance, the PDGame class defined in the earlier Pig Dice game. 

<b>Note: Your solution should recreate the user interface shown below.</b>

## User Interface for Multiplayer Pig Dice Game

<pre><b>
How many people are playing? 3
Enter player 1's name: Mick Mouse
Enter player 2's name: Don Duck
Enter player 3's name: 

Let's Play PIG Dice!

* See which player will reach 50 points in the fewest turns.
* Turn ends when you hold or roll a 1
* If you roll a 1, you lose all points for the turn.
* If you hold, you save all points for the turn.

Mick Mouse (Score:0) - TURN 1
roll or hold? (r/h): r
Die: 6 - Running score this turn: 6
roll or hold? (r/h): r
Die: 5 - Running score this turn: 11
roll or hold? (r/h): h
Score Banked This Turn: 11

Mick Mouse (Score:11) | Don Duck (Score:0) | Anonymous Player 1 (Score:0) | 

Don Duck (Score:0) - TURN 1
roll or hold? (r/h): r
Die: 2 - Running score this turn: 2
roll or hold? (r/h): r
Die: 5 - Running score this turn: 7
roll or hold? (r/h): r
Die: 2 - Running score this turn: 9
roll or hold? (r/h): h
Score Banked This Turn: 9

Mick Mouse (Score:11) | Don Duck (Score:9) | Anonymous Player 1 (Score:0) | 

Anonymous Player 1 (Score:0) - TURN 1
roll or hold? (r/h): r
Die: 6 - Running score this turn: 6
roll or hold? (r/h): r
Die: 6 - Running score this turn: 12
roll or hold? (r/h): h
Score Banked This Turn: 12

Mick Mouse (Score:11) | Don Duck (Score:9) | Anonymous Player 1 (Score:12) | 

Mick Mouse (Score:11) - TURN 2
roll or hold? (r/h): r

  -
  -
  -
  -
  
Mick Mouse (Score:49) - TURN 5
roll or hold? (r/h): r
Die: 6 - Running score this turn: 6
roll or hold? (r/h): r
Die: 2 - Running score this turn: 8
roll or hold? (r/h): h
Score Banked This Turn: 8

Mick Mouse (Score:57) | Don Duck (Score:22) | Anonymous Player 1 (Score:20) | 

Don Duck (Score:22) - TURN 5
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score Banked This Turn: 0

Mick Mouse (Score:57) | Don Duck (Score:22) | Anonymous Player 1 (Score:20) | 

Anonymous Player 1 (Score:20) - TURN 5
roll or hold? (r/h): r
Die: 6 - Running score this turn: 6
roll or hold? (r/h): r
Die: 5 - Running score this turn: 11
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score Banked This Turn: 0

Mick Mouse (Score:57) | Don Duck (Score:22) | Anonymous Player 1 (Score:20) | 

Congratulations! Mick Mouse you win with a score of 57
</b></pre>
