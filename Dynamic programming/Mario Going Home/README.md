Mario is stuck in a lake at point (x,y). The pipe which sends him home is at point (0,0). Find the number of paths that Mario can take to reach the pipe given that he can only move down or to the left (x-1, y) or (x, y-1). The first 10 test cases can pass using brute force. Use a dynamic programming approach to solve this problem.



==> Input Format


One line containing x and y separated by a space.

* Constraints


1 <= x,y <= 1000

This problem won’t fit in a long long but solve it as if it will so we get the same overflow. Use long long not unsigned long long.

==> Output Format


One line containing the number of paths possible.

Sample Input 0



1 2

Sample Output 0



3

Explanation 0


The three possible paths are: - (1,2) (0,2) (0,1) (0,0) - (1,2) (1,1) (0,1) (0,0) - (1,2) (1,1) (1,0) (0,0)
