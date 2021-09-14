#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,j,f,a,b,c,sum;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        sum=0;
        cin>>f;
        for(int i=0; i<f; i++)
        {

            cin>>a>>b>>c;
            sum=sum+a*c;
        }
        cout<<sum<<endl;

    }
    return 0;
}
