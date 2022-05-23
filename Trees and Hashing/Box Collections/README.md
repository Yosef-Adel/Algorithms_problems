A box collection of N consecutive boxes (B1, B2, .., BN) are given. Each box contains a number of balls. Count the number of box collections of size M boxes (M is either 2 or 3) such that the difference of balls between each two consecutive boxes in these collections is D. Note that the order of boxes in any box collection are the same as the original box collection (e.g., collection B5-B1 is not allowed, because B1 is before B5 in the original collection, but B1-B5 is allowed). Use hash tables to implement your solution. Hints: (i) use unordered_map, and (ii) handle only the two possible M values (2 or 3).


===> Input Format


One line containing the number of boxes N, the difference D, and the required number of boxes per collection M

One line containing the number of balls in each box (B1, B2, ... until BN), space separated

* Constraints


N is between 3 and 10^7.

D is between 1 and 1000

M is either 2 or 3.

the number of balls in each box is between 1 and 100000

===> Output Format


The number of box collections of size M boxes that satisfy the condition

Sample Input 0


5 4 3

2 2 6 10 10

Sample Output 0


4

Explanation 0


There are only 1 possibility for box collections that are of size 3 and difference 4 which is <2 6 10>, but there are two boxes having 2, one box having 6, and two boxes having 10, so the total number of box collections that satisfy the conditions are: 2*1*2 = 4.


Note that if the input box collection is: <2 2 10 6 10>, then the output is 2 collections not 4, because 10 comes after the 6 only one time, so it's counted once (i.e., the order of elements matters).


Sample Input 1


6 2 2

2 3 3 5 9 7

Sample Output 1


3

Explanation 1


The box collections of size 2 and difference 2 are <3 5> and <5 7>. There are 2 ways to generate <3 5> and there is 1 way to generate <5 7>, so in total the count = 3.
Note that the collection <9 7> is not counted because the difference here is -2 not 2
