#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,n,l,m,g=0,k,j,h;
    char ch[100],x[100];
    //scanf("%d",&n);
    //while(n--){
    gets(ch);
    l=strlen(ch);
    for(i=0; i<l; i++)
    {
        m=ch[i]-'0';
        x+=m;
        h=strlen(x);
        {
            for(j=0;j<h;j++)
                k=x[j]-'0';
            g+=k;
        }
    }
    printf("%d",x);
    return 0;
}
