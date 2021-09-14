#include<stdio.h>
int main()
{
    int n,i,j,arr[100],check;
    scanf("%d",&n);
    while(n--)
    {
        for(i=0; i<10; i++)
            scanf("%d",&arr[i]);
        if(arr[0]<arr[1]<arr[2]<arr[3]<arr[4]<arr[5]<arr[6]<arr[7]<arr[8]<arr[9])
        {
            check=1;
        }
        if(check==1)

        {
            printf("orderd\n");
        }
        else
        {
            printf("unordered\n");
        }
        // printf("%d",arr[5]);

    }
    return 0;
}
