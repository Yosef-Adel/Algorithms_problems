Given two washing machines and N people with the given time needed at a machine. Each person should use a single washing machine. If each operating machine operates for K time find out for each given test case if all the people assigned could finish their laundry. Hint: Get the maximum capacity of a single machine. Use dynamic programming.



==> Input Format


One line containing t.

One line containing N and K separated by a space

One line containing the time for each person

Repeat for each test case

* Constraints

1 <= t <= 100

1 <= N <= 1000

1 <= K <= 1000

The time of each person is between 1 and 10

==> Output Format


One line for each test case, 1 if the assigned time is enough or 0 otherwise

Sample Input 0



1

3 4

2 4 2

Sample Output 0


1

Explanation 0


Person 0 and Person 2 go to a machine and Person 1 goes to the other machine.
