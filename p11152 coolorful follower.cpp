#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;

int main()
{
    double a,b,c,yel,red,pin,x,s,ar,tar,r,k;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        ar=sqrt(s*(s-a)*(s-b)*(s-c));
        r=a*b*c/sqrt(2*s*(b+c-a)*(c+a-b)*(a+b-c));
        tar=pi*r*r;
        k=(a*b*c)/(2*r*(a+b+c));
        yel=tar-ar;
        red=ar-(pi*k*k);
        pin=ar-red;
        cout<<fixed;
        cout<<setprecision(4)<<yel<<" "<<red<<" "<<pin<<endl;
    }
    return 0;


}


