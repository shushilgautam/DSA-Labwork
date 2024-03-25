#include <stdio.h>
#include <math.h>

int TowerOfHanoi(int n, char A, char B, char C)
{
    if (n > 0)
    {
        TowerOfHanoi(n - 1, A, C, B);
        printf("Move %c To %c \n",A,C);
        TowerOfHanoi(n-1,B,A,C);
    }
}

int main()
{
    int n;
    char A,B,C;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    TowerOfHanoi(n,'A','B','C');
}