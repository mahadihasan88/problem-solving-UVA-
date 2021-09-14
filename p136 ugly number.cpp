#include<bits/stdc++.h>
using namespace std;

#define max 1000
bool ar[max+10];
typedef long long ll;

void sieve( )
{
    long int x=sqrt(max);
    ar[0]=ar[1]=true;
    for(int i=4; i<=max; i=i+2)
        ar[i]=true;
    for(int i=3; i<=x; i=i+2)
    {
        if(ar[i]==false)
        {
            for(int j=i*i; j<=max; j+=i+i)
                ar[j]=true;
        }
    }
}

int main()
{
    long long int n,k,m;
    while(cin>>n&&n!=0)
    {
        k=0;
        m=n;
        n=fabs(n);
        int st[n+10]= {0};
        sieve();
        for(int i=2; i<=n; i++)
        {
            if(ar[i]==false && n%i==0)
            {
                while(n%i==0)
                {
                    n=n/i;
                    st[k]=i;
                    k++;

                }
            }
        }
        if(m>0)
        {
            cout<<m<<" = ";
            for(int i=0; i<k-1; i++)
            {

                cout<<st[i]<<" X ";
            }
            cout<<st[k-1]<<endl;
        }
        else
        {
            cout<<m<<" = -1 X ";
            for(int i=0; i<k-1; i++)
            {

                cout<<st[i]<<" X ";
            }
            cout<<st[k-1]<<endl;
        }
    }

    return 0;

}
