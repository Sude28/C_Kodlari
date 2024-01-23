#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3,b;
    /*
    if(a<0)
        b=1;
    else if (a==0)
        b=2;
    else
        b=3;
     */

     b=(a<0)?1:(a>0)?3:2;/*a<0 ise b=1 a>0 ise b=3 bunlar deðilse b=2*/

     printf("b: %d",b);
    return 0;
}
