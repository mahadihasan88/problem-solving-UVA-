#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,arr[10]= {0},s,m,k;

        cin>>n;
        for(int i=1; i<=n; i++)
        {
            k=i;
            int   sum=log10(k)+1;
            for(int i=0; i<sum; i++)
            {
                s=k%10;
                m=k/10;
                k=m;
                arr[s]++;
            }
        }
        for(int i=0; i<9; i++)
        {
            if(arr[i]>=0)
                cout<<arr[i]<<" ";
        }
        cout<<arr[9];
        cout<<endl;
    }

    return 0;

}
