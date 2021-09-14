#include<stdio.h>
#include<math.h>
int main()
{
    int m,h,n;
    float p;
    while(scanf("%d:%d",&h,&m))
    {
        if(h==0&&m==0)
        {
            break;
        }
        p=fabs((5.5*m)-(30*h));

        if(p>180)
        {
            p=360-p;
        }
        printf("%.3f\n",p);
    }
    return 0;
}
