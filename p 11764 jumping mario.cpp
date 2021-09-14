#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int ar[n+10];
        int high=0,low=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];

        }
          for(int i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1])
                high++;
            else  if(ar[i]<ar[i+1])
                low++;

        }
        cout<<"Case "<<i<<": "<<low<<" "<<high<<endl;

    }
    return 0;
}
