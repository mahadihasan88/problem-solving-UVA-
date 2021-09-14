#include<stdio.h>
int main()
{
    int arr[100],i,n,m,x,cas=1;
    scanf("%d",&n);
    while(n--)
    {
        for(i=0;i<3;i++)
            scanf("%d",&arr[i]);
        if(arr[0]<arr[1]&&arr[1]<arr[2]&&arr[0]<arr[2])
        {
            x=arr[1];
        }
        else  if(arr[0]>arr[1]&&arr[1]>arr[2]&&arr[0]>arr[2])
        {
            x=arr[1];
        }
          else  if(arr[0]>arr[1]&&arr[1]<arr[2]&&arr[0]<arr[2])
        {
            x=arr[0];
        }
          else  if(arr[0]<arr[1]&&arr[1]>arr[2]&&arr[0]>arr[2])
        {
            x=arr[0];
        }
          else  if(arr[0]<arr[1]&&arr[1]>arr[2]&&arr[0]<arr[2])
        {
            x=arr[2];
        }
          else  if(arr[0]>arr[1]&&arr[1]<arr[2]&&arr[0]>arr[2])
        {
            x=arr[2];
        }
        printf("Case %d: %d\n",cas,x);
        cas++;

    }
   return 0;
}
