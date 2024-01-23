#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kutle[5]={5,10,15,20,25};
    int *p;
    p=kutle; //p=&kutle[0] --> 1.elemanýn adresi p iþaretcisine atanýyor demek

    printf("*p degeri = %d\n", *p);
    printf("*(p+1) degeri = %d\n", *(p+1));
    printf("*(p+2) degeri = %d\n", *(p+2));
    printf("*(p+3) degeri = %d\n", *(p+3));
    printf("*(p+4) degeri = %d\n", *(p+4));

    printf("\n");

    for(int i=0;i<5;i++)
        printf("%d\n",*(p+i));

    printf("\n");

    for(int i=0;i<5;i++)
        printf("%d\n",p[i]);




    return 0;
}
