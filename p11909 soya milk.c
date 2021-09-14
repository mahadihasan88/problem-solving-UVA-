#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    double l,w,h,teta,v;
    double x,b,t,k;
    while(scanf("%lf%lf%lf%lf",&l,&w,&h,&teta)!=EOF)
    {
        v=h*l*w;
        x=(teta*pi)/180;
        b=tan(x);
        t=(l*l*b*w)/2;
        k=(v-t);
        printf("%.3lf mL",k);
        printf("\n");
    }
    return 0;
}
