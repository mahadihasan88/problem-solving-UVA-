#include<bits/stdc++.h>using namespace std;int main(){    char st[1000],s[1000];    int so=0,f,k,sum=0;    gets(st);    gets(s);    f=strlen(st);    k=strlen(s);    for(int i=0;i<f;i++)    {        if(st[i]=='a'||'e'||'i'||'u')            so++;    }    for(int j=0;j<k;j++)    {        if(s[j]=='a'||'e'||'i'||'u')            sum++;    }    if(so==sum){        cout<<"yes";    cout<<endl;    }    else    {        cout<<"no";        cout<<endl;    }}