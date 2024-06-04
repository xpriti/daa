#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int f[n+1],i;
    f[0] = 0;
    f[1] = 1;
    for( i = 2; i <= n; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main() {
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Fibonacci of a negative number doesn't exist.\n");
    else
        printf("Fibonacci number F(%d) is %d\n", n, fibonacci(n));
    return 0;
}

