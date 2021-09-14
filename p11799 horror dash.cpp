#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,t,ar[10000];
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        cin>>n;
        int fast=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]>fast)
                fast=ar[i];
        }
        cout<<"Case "<<k<<": "<<fast<<endl;

    }
    return 0;
}
