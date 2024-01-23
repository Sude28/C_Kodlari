#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,c,d;
    c=3;
    d=-7;
    b=(c==1||c==2)?5:(c==3)?(d>0)?6:7:8;

    printf("b=%d",b);
    return 0;
}
