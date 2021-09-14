#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {

        char st[600];
        cin>>st;
        int x,sub[10]= {0},small=1000,m=0,n=0,k=0,ar[200]= {0};

        x=strlen(st);
        for(int i=0; i<x; i++)
        {
            if(st[i]=='A'||st[i]=='R'||st[i]=='M'||st[i]=='G'||st[i]=='I'||st[i]=='T')
                ar[st[i]]++;
        }
        sub[0]=ar['M'];
        sub[1]=ar['G'];
        sub[2]=ar['I'];
        sub[3]=ar['T'];
        for(int i=0; i<4; i++)
        {
            if(sub[i]<small)
                small=sub[i];
        }

        m=ar['A']/3;
        n=ar['R']/2;
        if(m>n)
        {
            k=n;

        }
        else
        {
            k=m;
        }
        if(k>small)
        {
            cout<<small<<endl;
        }
        else
        {
            cout<<k<<endl;
        }
    }
    return 0;
}

