// Factorial Using Recursion
#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main()
{
    int n;
    printf("Enter the number to find the factorial :\n");
    scanf("%d", &n);
    printf("The factorial of %d is:%d", n, factorial(n));
}