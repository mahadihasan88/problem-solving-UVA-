#include<bits/stdc++.h>
using namespace std;

int main()
{
   long  long int n,k;
    while(scanf("%lld",&n))
    {
        if(n==0)
            return 0;
      long long  int ar[n+10];
        for(long int i=0; i<n; i++)
        {
            scanf("%lld",&ar[i]);
        }
        sort(ar,ar+n);
        for(long int i=0; i<n-1; i++)
           printf("%lld ",ar[i]);
            printf("%lld",ar[n-1]);
            printf("\n");

    }
    return 0;
}
