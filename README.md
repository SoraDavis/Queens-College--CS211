# Queens-College--CS211

*RACES*

The user will enter a string of letters, and this will continue until "done" is entered.
Each letter represents a runner on a team. (All "A"s are on one team, all "B"s on another, etc.)
The order they are listed in indicates the order they arrived at the finish line in.
Calculate the average score for each team. Also output the number of teams, how many runners were on each team, and which team 
was the winning team.

*SHIFT EQUIVALENT ARRAYS*

It is possible to transform an array a into array b
by shifting
each element of a to
the “right” 
a certain number of places. If an element “falls off” the back of the array, it comes around the front and 
keep counting positions. 
(One way to look at this is to imagine that we are moving the element around in a circular manner.)
Definition: Let a and b be two integer arrays of the same length. We say that they are “
shift 
equivalent”
if 
array a can be right shifted to create array b. 

Write a function
"bool equivalent(int a
[]
, int b
[]
, int n)"
which takes two arrays, a and b 
of length n,
and returns 
true
if they are shift equivalent and 
false
otherwise.

*8 QUEENS- WITH GOTO*

The eight queens puzzle is the problem of placing eight chess queens on an 8×8 chessboard so that no two queens threaten each other. (No two queens can be in the same row, column, or diagonal.)
This version of code solves the problem using GOTO labels.
