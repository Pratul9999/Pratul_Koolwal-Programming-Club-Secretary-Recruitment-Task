# Editorial - Nobita, Shizuka and Coprime Reduction Game

As evident from problem statement, for all $p_i$'s, we have to calculate their Euler Totient &phi;($p_i$). Euler's Totient of number k is the number of numbers less than k and coprime to k.

The following properties of Euler totient function are sufficient to calculate it for any number:

(a) If  
$p$  is a prime number, then  
$\gcd(p, q) = 1$  for all  
$1 \le q < p$ . Therefore we have:
 
$$\phi (p) = p - 1.$$
(b) If  
$p$  is a prime number and  
$k \ge 1$ , then there are exactly  
$p^k / p$  numbers between  
$1$  and  
$p^k$  that are divisible by  
$p$ . Which gives us:
 
$$\phi(p^k) = p^k - p^{k-1}.$$
(c) If  
$a$  and  
$b$  are relatively prime, then:
 
$$\phi(a b) = \phi(a) \cdot \phi(b).$$ 
This relation is not trivial to see. It follows from the Chinese remainder theorem. The Chinese remainder theorem guarantees, that for each  
$0 \le x < a$  and each  
$0 \le y < b$ , there exists a unique  
$0 \le z < a b$  with  
$z \equiv x \pmod{a}$  and  
$z \equiv y \pmod{b}$ . It's not hard to show that  
$z$  is coprime to  
$a b$  if and only if  
$x$  is coprime to  
$a$  and  
$y$  is coprime to  
$b$ . Therefore the amount of integers coprime to  
$a b$  is equal to product of the amounts of  
$a$  and  
$b$ .

In general, for not coprime  
$a$  and  
$b$ , the equation

 
 
 
$$\phi(ab) = \phi(a) \cdot \phi(b) \cdot \dfrac{d}{\phi(d)}$$ 
with  
$d = \gcd(a, b)$  holds.

Thus, using the first three properties, we can compute  
$\phi(n)$  through the factorization of  
$n$  (decomposition of  
$n$  into a product of its prime factors). If  
$n = {p_1}^{a_1} \cdot {p_2}^{a_2} \cdots {p_k}^{a_k}$ , where  
$p_i$  are prime factors of  
$n$ ,
![Screenshot 2024-05-23 194057](https://github.com/Pratul9999/Pratul_Koolwal-Programming-Club-Secretary-Recruitment-Task/assets/152211763/1a162601-a995-48c5-866e-320c9ff26c31)

Since we will need to find Euler totient of several numbers less than $p_i$ also, so it shall be beneficial if we find out the &phi;(t) for all $1 \le t \le p_i$.
We can first find out the maximum number present in our array (this can be done while taking input). Let's say this number is $a$.<br>
Then we can create an array of size $a+1$ to store &phi;(t) for all $1 \le t \le p_i$.
We initialize this array with the index numbers.

Then we start iterating from i=2. If we encounter any number (say, $k$) whose value in array is equal to index number, it must be a prime (you shall see why). So now you change array values for all its multiples, by multiplying them with $(1 - \dfrac{1}{\phi(k)})$.
So for a prime number, since it has no other prime factors, its array value will remain unchanged until we reach that number.
This way, iterating upto $a$, we can find &phi;(t) for all $1 \le t \le p_i$,

Now we simply go back to the input array, and for each entry, we initialize a cost variable to 0, then we reduce that number to its Totient value, and every time we do this we can increase the cost variable by 1. When that number finally reaches 1, we can print the cost value. Same has to be done for all the values of input array.
