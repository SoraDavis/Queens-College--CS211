# Queens-College--CS211

Shift Equivalent Arrays

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

