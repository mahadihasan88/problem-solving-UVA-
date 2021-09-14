#include<stdio.h>
int main()
{
    long int n,i,a,b,s;

    while( scanf("%ld",&n))
    {
        a=0;
        b=1;
        for(i=1; i<=n; i++)
        {
            s=a+b;
            a=b;
            b=s;

        }
        printf("The Fibonacci number for %ld is %ld\n", n,a);
    }

    return 0;
}


