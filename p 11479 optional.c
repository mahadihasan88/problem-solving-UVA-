#include<stdio.h>
int main()
{
    int T,cas=1,i;
    long long int a,b,c;
    scanf("%d",&T);
   for(i=1;i<=T;i++)
    {

        scanf("%lld%lld%lld",&a,&b,&c);

        if(a+b<=c||b+c<=a||c+a<=b)
        {
            printf("Case %d: Invalid\n",cas);
            cas++;
        }
        else if(a<=0&&b<=0&&c<=0)
        {
             printf("Case %d: Invalid\n",cas);
            cas++;
        }
        else
        {
            if(a==b&&b==c)
            {
                printf("Case %d: Equilateral\n",cas);
                cas++;
            }
            else if(a!=b&&b!=c&&c!=a)
            {
                printf("Case %d: Scalene\n",cas);
                cas++;
            }
            else
            {
                printf("Case %d: Isosceles\n",cas);
                cas++;
            }
        }
    }
    return 0;
}

