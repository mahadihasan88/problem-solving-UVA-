#include<bits/stdc++.h>using namespace std;int main(){    int n,j;    while(cin>>n)    {        int ar[n];        for(int i=0; i<n; i++)        {            cin>>ar[i];        }        int a[n+1]= {0},coun=0;        for(int i=1; i<n; i++)        {            if(abs(ar[i]-ar[i-1])<n)            {                a[abs(ar[i]-ar[i-1])]++;            }        }        for(int i=1; i<n; i++)        {            if(a[i]==0)                coun=1;        }        if(coun==1)            cout<<"Not jolly"<<endl;        else            cout<<"Jolly"<<endl;    }    return 0;}