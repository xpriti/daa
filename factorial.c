#include <stdio.h>

int factorial(int n) {
    int f[n+1],i;
    f[0] = 1; 
    for( i = 1; i <= n; i++) {
        f[i] = i * f[i-1];
    }
    return f[n];
}

int main() {
    int n;
    printf("Enter a non-negative integer:\n");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else
        printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}

