#include<bits/stdc++.h>using namespace std;int main(){    int t;    cin>>t;    while(t--)    {        int n,i,ar[1000+6],sum=0,count=0;        cin>>n;        for(int i=0; i<n; i++)        {            cin>>ar[i];            sum=sum+ar[i];        }        double aver=sum/n;        for(int i=0; i<n; i++)        {            if(ar[i]>aver)                count++;        }        double x=(count*100.00)/n;        printf("%.3f%\n",x);    }    return 0;}