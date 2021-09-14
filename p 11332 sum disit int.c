#include<stdio.h>
#include<math.h>
int main()
{

    int n,i,x,sum=0,l,m;
    scanf("%d",&n);
    if(n==0)
        return 0;
    l=log10(n)+1;
    for(i=1;i<=l;i++)
    {
        x=n/pow(10,i);
        m=x/pow(10,i-1);
        sum=sum+m;

    }
     //printf("%d\n",sum);

    printf("%d",sum);

    return 0;
}
