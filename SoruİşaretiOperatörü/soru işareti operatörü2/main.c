#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int a=1;
    x=(a>1)?1:(a==1)?2:3;
    printf("x=%d",x);
    return 0;
}
