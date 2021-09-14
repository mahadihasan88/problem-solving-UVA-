#include<stdio.h>
#include<math.h>
int main()
{
    int m1,m2,m3;
    float a,sm,k,n;
    scanf("%d%d%d",&m1,&m2,&m3);
    sm=(m1+m2+m3)/2;
    k=sm*(sm-m1)*(sm-m2)*(sm-m3);
    n=sqrt(k);
    a=(4.0/3.0)*n;
    printf("%.3f\n",a);
    return 0;

}
