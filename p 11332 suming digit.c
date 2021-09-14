#include<stdio.h>
#include<math.h>
int power(int p ,int s)
{
    int k=1,j;
    for(j=1; j>=0; j++)
    {
        k=k*p;
    }
    return k;
}
int main()
{
    int disit,i,n,d,r,sum=0,x,l;
    scanf("%d",&n);
    disit=log10(n);
    for(i=disit; i>=0; i--)
    {
        while(r==0)
        {   l=0;
            x=power(10,i);
            d=n/x;
            r=n%x;
            n=r;
            sum+=l;
        }
        printf("%d",sum);

    }
    return 0;
}
