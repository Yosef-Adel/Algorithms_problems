Your friend is trapped in an N*N room at square (x,y). He can make K moves to try and escape. Each move is one of R possible moves. In any trial, if he escapes he can’t get back inside the room. Calculate how many scenarios he succeeds in escaping. The first 10 test cases can pass using brute force. Use a dynamic programming approach to solve this problem.



==> Input Format


One line containing N, K, R, x, and y separated by a space.

For R lines:

dx, dy, The move he can make.

* Constraints


0 <= N <= 70

0 <= K <= 100

0 <= R <= 10

0 <= x,y <= N-1

-(N/2) <= dx,dy <= (N/2)

The test cases are guaranteed to fit in an unsigned long long

==> Output Format


One line containing the number of scenarios in which he escapes.


Sample Input 0


2 2 2 0 0

1 1

-1 -1

Sample Output 0


2

Explanation 0


If he makes move 1 twice or makes move 2 once he escapes, if he makes move 1 then make move 2 he stays inside. He succeeds twice and fails once.
