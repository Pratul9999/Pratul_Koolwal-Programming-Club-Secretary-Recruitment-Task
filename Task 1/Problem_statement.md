# Nobita, Shizuka and Coprime Reduction Game
As we all know, Shizuka is fond of Coprime numbers and invites Nobita to play a game. Shizuka explains the rules of the game:

•	She would give Nobita a set of $n$ numbers { $p_i$ : $1  \le i \le n$}.

•	Nobita must find the number of numbers (say $x$) that are less than $p_i$ and coprime to $p_i$. Then the number $p_i$ reduces to $x$. This process is repeated until the number becomes 1.

•	If Nobita is able to calculate the minimum number of steps needed to accomplish this task for all numbers Shizuka gives him, then he wins.

Nobita at first accepts the challenge without thinking that Doraemon has gone for holidays for some weeks. Nobita doesn't know math or coding (obviously!) so he comes to you to ask for help. Can you help Nobita win this challenge?

Recall that two numbers a and b are coprime if their GCD (Greatest Common Divisor) is 1.

##Input
The first line of the input contains $n$ ($1 \le n \le 10^5$) --- the number of test cases.

The next line contains $n$ integers -- $p_1$, $p_2$, …, $p_n$ ($1 \le p_i \le 10^6$). For each $p_i$, you have to find the minimum number of steps required as per rules mentioned above.

##Output
For each test case $p_i$, output the minimal number of steps required on a separate line.
