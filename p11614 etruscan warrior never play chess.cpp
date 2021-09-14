#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum=1,count=0,k,t;
    cin>>t;
    while(t--)
    {
        sum=1,count=0;
        cin>>n;
        while(sum<=n)
        {

            count++;
            n=n-sum;
            sum=sum+1;
        }
        cout<<count<<endl;
    }
    return 0;
}
