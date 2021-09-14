#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    while( cin>>n&&n!=0)
    {

        int ar[n+10];
        for(int i=0; i<n; i++)
            cin>>ar[i];
              sort(ar,ar+n);
        long int sum=ar[0],s=0;

        for(int i=1; i<n; i++)
        {
            sum=sum+ar[i];
            s=s+sum;
            // cout<<sum<<" "<<s<<endl;
        }
        cout<<s<<endl;
    }
    return 0;
}
