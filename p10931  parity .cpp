#include<bits/stdc++.h>
using namespace std;

int main()
{

    long int n,k,ar[100];
    while(cin>>n)
    {
        if(n==0)
            return 0;
        int i=0,count=0;
        while(n!=0)
        {
            k=n%2;
            n=n/2;

            ar[i]=k;
            i++;
        }
        cout<<"The parity of ";
        for(int j=i-1; j>=0; j--)
        {
            cout<<ar[j];
            if(ar[j]==1)
                count++;
        }
        cout<<" is "<<count<<" (mod 2)."<<endl;
    }
    return 0;
}
