#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    getchar();
    for(int i=1; i<=t; i++)
    {
        char ar[110];
        int x=0,sum=0;

        gets(ar);
        x=strlen(ar);

        for(int i=0; i<x; i++)
        {
            if(ar[i]=='a'||ar[i]=='d'||ar[i]=='g'||ar[i]=='j'||ar[i]=='m'||ar[i]=='p'||ar[i]=='t'||ar[i]=='w')
                sum=sum+1;
            else if(ar[i]=='b'||ar[i]=='e'||ar[i]=='h'||ar[i]=='k'||ar[i]=='n'||ar[i]=='q'||ar[i]=='u'||ar[i]=='x')
                sum=sum+2;
            else if(ar[i]=='c'||ar[i]=='f'||ar[i]=='i'||ar[i]=='l'||ar[i]=='o'||ar[i]=='r'||ar[i]=='v'||ar[i]=='y')
                sum=sum+3;

            else if(ar[i]=='s'||ar[i]=='z')
                sum=sum+4;
            else
                sum=sum+1;
        }
        cout<<"Case "<<"#"<<i<<": "<<sum<<endl;
    }
}

