#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,k,count,t=1,m;
    while(cin>>n>>k)
    {
        m=n;
        if(n<0&&k<0)
            return 0;
            count=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                count++;
            }
            else
            {
                if(n*3+1>k)
                    break;
                n=n*3+1;
                count++;
            }
        }
        cout<<"Case "<<t<<": A = "<<m<<", limit = "<<k<<", number of terms = "<<count+1<<endl;
        t++;
    }
    return 0;
}
