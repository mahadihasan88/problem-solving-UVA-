#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x = abs((((n * 63 + 7492) * 5 - 498)/10)%10);
        cout<<x<<endl;
    }
    return 0;
}
