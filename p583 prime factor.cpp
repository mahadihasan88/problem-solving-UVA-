#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,m;
    while(cin>>n&&n!=0)
    {
        m=n;
        n=fabs(n);
        k=0;
        int x=sqrt(n);
        int st[n+10];
        while(n%2==0)
        {
            n=n/2;
            st[k]=2;
            k++;
        }
        for(int i=3; i<=x; i=i+2)
        {

            while(n%i==0)
            {
                n=n/i;
                st[k]=i;
                k++;
            }
        }
        if(n>1)
            st[k++]=n;
        if(m==1||m==-1)
        {
            if(m==1)
                cout<<"1 = "<<endl;
            else
                cout<<"-1 = -1 x "<<endl;
        }
        else if(m>0)
        {
            cout<<m<<" = ";
            for(int i=0; i<k-1; i++)
                cout<<st[i]<<" x ";
            cout<<st[k-1]<<endl;
        }

        else
        {
            cout<<m<<" = -1 x ";
            for(int i=0; i<k-1; i++)
                cout<<st[i]<<" x ";
            cout<<st[k-1]<<endl;
        }
    }
    return 0;
}
