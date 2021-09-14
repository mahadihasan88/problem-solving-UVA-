#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],i;
    for(i=0;i<4;i++){
    scanf("%[^*]",ch);
    if(ch==Hajj)
    {
        printf("Hajj-e-Akbar\n");
    }
    else if(ch==Umrah)
    {
        printf("Hajj-e-Asghar\n");
    }
    }
    return 0;
}
