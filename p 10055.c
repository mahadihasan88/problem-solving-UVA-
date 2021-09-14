#include<stdio.h>
int main()
{
     long long int H,O;
    while(scanf("%lld%lld",&H,&O)!=EOF)
    {
        if(O>H)
        printf("%lld\n",O-H);
        else
            printf("%lld\n",H-O);
    }

    return 0;
}
