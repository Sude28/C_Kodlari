#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas=25;
    int *pyas;
    pyas=&yas;

    printf("%p\n",&yas);
    printf("%p\n",pyas);

    printf("%d",*pyas);
    return 0;
}
