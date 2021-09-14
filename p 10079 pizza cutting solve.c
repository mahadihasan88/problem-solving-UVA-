#include<stdio.h>
int main()
{
    long long int n,p,i;

    while(scanf("%lld",&n)&&n>=0)
    {


        p =1+((n*(n+1))/2);

        printf("%lld\n",p);

    }
    return 0;

}

