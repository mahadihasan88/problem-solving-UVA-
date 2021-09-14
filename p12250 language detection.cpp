
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char st[100];
    int k=1;
    while(scanf("%s",st)&&st[0]!='#')
    {


         if(strcmp(st,"HELLO")==0)
        {
            cout<<"Case "<<k<<": ENGLISH"<<endl;
            k++;
        }
        else if(strcmp(st,"HOLA")==0)
        {
            cout<<"Case "<<k<<": SPANISH"<<endl;
            k++;
        }
        else if(strcmp(st,"HALLO")==0)
        {
            cout<<"Case "<<k<<": GERMAN"<<endl;
            k++;
        }
        else if(strcmp(st,"BONJOUR")==0)
        {
            cout<<"Case "<<k<<": FRENCH"<<endl;
            k++;
        }
        else if(strcmp(st,"CIAO")==0)
        {
            cout<<"Case "<<k<<": ITALIAN"<<endl;
            k++;
        }
        else  if(strcmp(st,"ZDRAVSTVUJTE")==0)
        {
            cout<<"Case "<<k<<": RUSSIAN"<<endl;
            k++;
        }
        else
        {
            cout<<"Case "<<k<<": UNKNOWN"<<endl;
            k++;
        }
    }
    return 0;

}

