#include<bits/stdc++.h>
using namespace std;

long int num(long int k)
{
    long int ln,m,sum=0;

    ln=log10(k)+1;
    for(int i=0; i<ln; i++)
    {
        m=k%10;
        k=k/10;
        sum=sum+(m*m);
    }
    return sum;
}
int main()
{
    long int n,x,m,t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        if(n<10)
            x=n*n;
        else
            x=n;

        while(x>=10)
        {
            x=num(x);
        }
        if(x==1)
            cout<<"Case #"<<i<<": "<<n<<" is a Happy number."<<endl;
        else
            cout<<"Case #"<<i<<": "<<n<<"  is an Unhappy number."<<endl;
    }
    return 0;
}
