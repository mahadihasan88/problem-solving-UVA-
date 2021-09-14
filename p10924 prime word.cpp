#include<bits/stdc++.h>
using namespace std;
bool ar[10000];
void sieve(int n)
{
    int k;
    k=sqrt(n);
    ar[0]=ar[1]=true;
    for(int i=4; i<=n; i=i+2)
        ar[i]=true;
    for(int i=3; i<=k; i=i+2)
    {
        if(ar[i]==false)
        {
            for(int j=i*i; j<=n; j+=i+i)
                ar[j]=true;
        }
    }

}

int main()
{
    char st[100];
    int x,sum;
    while(cin>>st)
    {
        //cin>>st;
        sum=0;
        x=strlen(st);
        for(int i=0; i<x; i++)
        {
            if(st[i]>='a'&&st[i]<='z')
            {
                sum=sum+(int)st[i]-96;

            }
            else
            {
                sum=sum+(int)st[i]-38;
            }
        }
       if(sum==1){
            cout<<"It is a prime word."<<endl;
       }
        else{
        sieve(sum);
        if(ar[sum]==false)
          cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
        }
    }
    return 0;

}
