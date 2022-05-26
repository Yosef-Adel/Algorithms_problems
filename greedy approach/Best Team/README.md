Given N players with certain ratings, you are required to form teams of two such that the difference between the best team and the worst team is as small as possible. Use a greedy algorithm to solve this problem.



==> Input Format


One line containing N.

One line containing the ratings of all N players

* Constraints


4 <= N <= 10^6, N is even

The rating of each player is between 1 and 10^3

==> Output Format


The minimum difference between the best team and the worst team

Sample Input 0



4

2 6 4 3

Sample Output 0



1

Explanation 0



Team with (2,6) and team with (4,3). Difference is 8 - 7.
