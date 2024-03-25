
#include <stdio.h>
#include <math.h>

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
       if (n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n-2);
}

int main()
{
    int n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    printf("The fibonacci series up to %d term  is: \n",n);
    for(int i=0;i<n;i++){   
        
        printf("%d \t",fibo(i));
        

    }
}