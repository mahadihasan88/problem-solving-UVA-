#include<bits/stdc++.h>
using namespace std;
static char st[128];
int main()
{
    register unsigned int i;
    unsigned remainder;

    while(gets(st))
    {
        if(st[0] == 48 && st[1] == 0)
            return 0;
      for(remainder = i = 0; st[i]; ++i)
        {
            remainder = ( remainder * 10 + st[i] - 48 ) % 17;    /* Keep multiplying the remainder by 10 and add the current digit, then mod by 17 to get remainder */

            // cout<<remainder<<endl;

            /* If the number is divisible by 17 then remainder in the end becomes ZER0 */

        }
        remainder ? printf("0\n") : printf("1\n");

    }
    return 0;
}
