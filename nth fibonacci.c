ALGORITHAM:

Step 1: If n <= 1 then
Return n
Step 2: Return FIB_RECURSIVE(n-1) + FIB_RECURSIVE(n-2)
Step 3: End
Algorithm FIB_ITERATIVE(n)
Step 1: If n = 0 return 0
Step 2: a ← 0
Step 3: b ← 1
Step 4: For i ← 2 to n do
c ← a + b
a ← b
b ← c
Step 5: Return b
Step 6: End

PROGRAM:

#include <stdio.h>
int fib_rec(int n) {
if (n <= 1)
return n;
return fib_rec(n-1) + fib_rec(n-2);
}
int fib_iter(int n) {
int a = 0, b = 1, c, i;
if (n == 0) return 0;
for (i = 2; i <= n; i++) {
c = a + b;
a = b;
b = c;
}
return b;
}
int main() {
int n;
printf("Enter n: ");
scanf("%d", &n);
printf("Recursive Fibonacci: %d\n", fib_rec(n));
printf("Iterative Fibonacci: %d\n", fib_iter(n));
return 0;
}
