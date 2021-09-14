#include<stdio.h>
#include<math.h>
int main()
{
    int T,n,a,b,c,cas=1,s,p;
    scanf("%d",&T);
    while(T--)
    {

        scanf("%d%d%d",&a,&b,&c);
        s=(a+b+c)/2;
        p=(s*(s-a)*(s-b)*(s-c));
        if(p<0)
        {
            printf("Case %d: Invalid\n",cas);
            cas++;
        }
        else
        {
            if(a==b==c)
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
