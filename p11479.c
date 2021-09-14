#include<stdio.h>
#include<math.h>
int main()
{
    int T,n,a,b,c,cas=1,s,p;
    scanf("%d",&T);
    while(T--)
    {
        //cas=1;
        scanf("%d%d%d",&a,&b,&c);

        s=(a+b+c)/2;
        p=(s*(s-a)*(s-b)*(s-c));
          if(a==0&&b==0&&c==0)
        {
             printf("Case %d: Invalid\n",cas);
                cas++;
        }
      else if(p<0)
        {
        printf("Case %d: Invalid\n",cas);
                cas++;
        }
        else
        {
            if(a==b&&b==c&&c==a)
            {
                printf("Case %d: Equilateral\n",cas);
                cas++;
            }
            else if((a==b&&b!=c)||(b==c&&c!=a)||(c==a&&a!=b))
        {
            printf("Case %d: Isosceles\n",cas);
                cas++;
            }
            else
            {
                printf("Case %d: Scalene\n",cas);
                cas++;
            }
        }
    }
    return 0;
}
