#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[100],str[100];
    int n,x,y,count,coun,t;
    cin>>t;
    while(t--)
    {
        count=0;
        coun=0;
        cin>>st>>str;
        x=strlen(st);
        y=strlen(str);
        if(x==y)
        {
            for(int i=0; i<x; i++)
            {
                if(st[i]!=str[i])
                {
                    coun++;
                    if((st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')&&(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))

                        count++;
                }
            }
            if(count==coun)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;


}
