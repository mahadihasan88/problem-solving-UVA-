#include<stdio.h>
int main()
{
    int n,i,j,a,b,sum,count=1;
    scanf("%d",&n);

        while(n--)

        {
            sum=0;
            scanf("%d",&a);
            scanf("%d",&b);
            if(a%2==0)
            {
                a=a+1;
            }
            for(i=a; i<=b; i=i+2)
            {
                sum=sum+i;
            }
            printf("Case %d: %d\n",count,sum);
            count++;

        }

    return 0;
}
