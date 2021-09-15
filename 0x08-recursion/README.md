# Resources #
[0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU65GPZGY3%2F20210915%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210915T192813Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8cd7eb747da47c739426b89ae31dcc44cd9bb1e8d7df806011a2637e8c9b23e0)

What on Earth is Recursion?
[C - Recursion](https://www.youtube.com/watch?v=Mv9NEXX1VHc)

[C Programming Tutorial 85, Recursion pt.1](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)

[C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=XGxbXMP6k8k)

[Learning Objectives](https://www.youtube.com/watch?v=7XiIS6HobNs)

# Tasks #
## 0-puts_recursion.c ##
Write a function that prints a string, followed by a new line.

Prototype: void _puts_recursion(char *s);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

## 1-print_rev_recursion.c ##
Write a function that prints a string in reverse.

Prototype: void _print_rev_recursion(char *s);

## 2-strlen_recursion.c ##
Write a function that returns the length of a string.

Prototype: int _strlen_recursion(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

## 3-factorial.c ##
Write a function that returns the factorial of a given number.

Prototype: int factorial(int n);
If n is lower than 0, the function should return -1 to indicate an error
Factorial of 0 is 1

## 4-pow_recursion.c ##
Write a function that returns the value of x raised to the power of y.

Prototype: int _pow_recursion(int x, int y);
If y is lower than 0, the function should return -1
FYI: The standard library provides a different function: pow. Run man pow to learn more.

## 5-sqrt_recursion.c ##
Write a function that returns the natural square root of a number.

Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

## 6-is_prime_number.c ##
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

Prototype: int is_prime_number(int n);

## 100-is_palindrome.c ##
Write a function that returns 1 if a string is a palindrome and 0 if not.

Prototype: int is_palindrome(char *s);
An empty string is a palindrome

## 101-wildcmp.c ##
Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

Prototype: int wildcmp(char *s1, char *s2);
s2 can contain the special character *.
The special char * can replace any string (including an empty string)

