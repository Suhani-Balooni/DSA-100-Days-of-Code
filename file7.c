#include <stdio.h>

int fib(int n) {
if (n == 0) {
return 0;
}
if (n == 1) {
return 1;
}
return fib(n - 1) + fib(n - 2);
}

int main() {
int n;
printf("Enter the position n to find the n-th Fibonacci number: ");
scanf("%d", &n);
if (n < 0) {
printf("Error: Please enter a non-negative integer.\n");
return 1;
}
int result = fib(n);
printf("\nThe %d-th Fibonacci number is: %d\n", n, result);
printf("\nFibonacci sequence from 0 to %d:\n", n);
for (int i = 0; i <= n; i++) {
printf("F(%d) = %d\n", i, fib(i));
}
return 0;
}
