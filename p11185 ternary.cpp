#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[12345],i,k;
    while(cin>>n)
    {

          if(n<0)
              return 0;
              if(n==0)
              {
                  cout<<"0";
              }
                i=0;
        while(n!=0)
        {
            k=n%3;
            n=n/3;
            ar[i]=k;
            i++;
        }
        for(int k=i-1; k>=0; k--)
            cout<<ar[k];
   cout<<endl;
    }
    return 0 ;

}
