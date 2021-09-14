#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int k=2*n;
    int x[k],y[k],ans[n];
    double m=0;
    for(int i=0; i<k; i++)
    {
        cin>>x[i]>>y[i];
    }

    for(int i=0; i<k-1; i++)
    {
        if(x[i]==-1)
            continue;
        double sum=550.0;
        int k=0;
        for(int j=i+1; j<k; j++)
        {
            int o=j;
            if(x[j]==-1)
                continue;
            m= sqrt(((x[j]-x[i])*(x[j]-x[i])) + ((y[j]-y[i])*(y[j]-y[i])));
        cout<<m<<endl;
            if(m<sum)
            {
                sum=m;
                o=j;
            }
            cout<<m<<endl;
            x[o]=-1;
            y[o]=-1;
        }
        if(sum<550.0)
        {
            ans[k]=sum;
            k++;
        }
    }
  for(int i=0; i<n; i++)
       cout<<ans[i]<<" ";

}
