
#include<bits/stdc++.h>
using namespace std;
char s[128];

int main()
{
    register unsigned int i;
    unsigned  remainder;

    while(gets(s))
    {
        if(s[0] == 48 && s[1] == 0)
            return 0;

        /* 48 is character '0' and 0 is '\0' NUL character */

        for(remainder = i = 0; s[i]; ++i)
        {
            remainder = ( remainder * 10 + s[i] - 48 ) % 17;    /* Keep multiplying the remainder by 10 and add the current digit, then mod by 17 to get remainder */

            // cout<<remainder<<endl;

            /* If the number is divisible by 17 then remainder in the end becomes ZER0 */

        }
         remainder ? printf("0\n") : printf("1\n");
    }
        return 0;
    }
