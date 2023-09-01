/*
Learn
Contests & Events
Interview prep
Practice
Resources
Problem of the day

Your EXP
5655
New update is available. Click here to update.
Topics
Sum Of First N Numbers
Contributed by
Prashant Thakur
Easy
40/40
10 mins
95 %
35 upvotes
Problem Statement


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3
Sample Output 1 :
6
Explanation Of Sample Input 1:
Input: ‘n’ = 3

Output: 6

Explanation: The sum of the first 3 natural numbers is 1 + 2 + 3, equal to 6.
Sample Input 2:
5
Sample Output 2:
15
Explanation Of Sample Output 2:
Input: ‘n’ = 5

Output: 15

Explanation: The sum of the first 5 natural numbers is 1 + 2 + 3 + 4 + 5, equal to 15.
Expected Time Complexity:
The expected time complexity is O(1).
Expected Space Complexity:
The expected space complexity is O(1).
Constraints:
1 <= n <= 10^9
Time Limit: 1 sec
Prev
Next
12345678
int sumFirstN(int n) {
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
View hints
Last saved on 1:10:16 AM
*/
int sumFirstN(int n) {
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}