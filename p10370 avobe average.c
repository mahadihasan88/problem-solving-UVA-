#include<stdio.h>
int main()
{
    int n,i,k,arr[100],sum,count,t;
    float p,m;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        count=0;
        scanf("%d",&n);
        k=n;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }

        p=sum/n;
        for(i=0; i<n; i++)
        {
            if(arr[i]>p)
            {
                count++;

            }
        }
        m=((100.00*count)/k);
        printf("%.3f%\n",m);
    }
    return 0;
}
