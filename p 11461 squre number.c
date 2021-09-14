#include<stdio.h>
#include<math.h>
int main()
{
   long long int a,i,n,b,count;
    while(scanf("%lld%lld",&a,&b))
    {
        if(a==0&&b==0)
            return 0;
        count=0;
        for(i=a; i<=b; i++)
        {
          n=sqrt(i);
          if(n*n==i)
            {
                count++;
            }
            printf(" %d",n);
        }
        printf("%d\n",count);

    }
    return 0;
}
