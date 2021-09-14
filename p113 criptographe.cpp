#include<bits/stdc++.h>
using namespace std;

int main()
{
double n,count=0,k,p;
    cin>>n>>p;
    while(p!=1)
    {   count++;
        k=p/n;
        p=k;
    }
 cout<<count;
}
