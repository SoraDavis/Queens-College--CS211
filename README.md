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

*8 QUEENS*

Solve the eight queens puzzle without using GOTO labels. (Mechanically place a queen in the slot, and then send it to some sort of "judge." This "judge, which contains the intellegence of the program, will return if the queen is allowed in that spot or not. If the queen is rejected from all spots in that row, use backtracking.)

*8 QUEENS- CHESSBOARD*

Solve the eight queens puzzle and display the results using a nicer output. Modify the program (1 dimensional array – no GOTO version) so that it prints out a chessboard with some “fancy” representation of a queen in the appropriate positions.

*8 NUMBERS IN A CROSS*

Use backtracking to write a program which allocates the integers 1-8 to the squares in the cross-like figure, subject to the restrictions that no two adjacent squares contain consecutive integers. (No two consecutive numbers can be in boxes that are vertical, horizontal, or diagonal from each other.)

*STABLE MARRIAGE*

The Problem: You have n men and n woman, and their preference rankings of each other, and you need to match them up so that the total matching is “stable.”

The preference rankings: You are given 2 n X n arrays, mp (men’s preference) which gives the men’s ranking of the women, and wp (women’s preference) which gives the women’s ranking of the men. So mp[i][j] gives man i's ranking of woman j and likewise for the women’s ranking of the men in wp.

What is a stable matching? A matching is stable if there are no “instabilities.” An instability is the situation where there is a mutual greater preference for the other person’s partner than for one’s own. For example m1 would prefer w2 to w1 and likewise w2 prefers m1 to m2.

Input Data: For this program use the arrays mp and wp given. The data will thus be “given” and not obtained by reading it in. Output: Print out all stable matchings, one per line. (Same output as the one dimensional eight queens program.)

*STABLE MARRIAGE RECURSIVE*

Modify the Stable Marriage code so it works recursively. (When using recursion, backtracking is a natural result due to the way it works on the Runtime Stack!)


