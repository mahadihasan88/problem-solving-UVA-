#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int s,d,a,b;
   int t;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        a=(s+d)/2;
        b=s-a;
        if(((s%2!=0 && d%2!=0) || (s%2==0 && d%2==0) )&& s>=d)
            cout<<a<<" "<<b<<endl;
        else

            cout<<"impossible"<<endl;
    }
    return 0;
}

