#include <stdio.h>
#include <stdlib.h>

void takas(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


int main()
{
    int a,b;
    a=22;
    b=33;

    printf("takas oncesi: a=%d b=%d\n",a,b);
    printf("takas oncesi: &a=%p &b=%p\n",&a,&b);

    takas(&a,&b); //x=&a diye alýyor o yüzden önünde * var degerini almak icin

    printf("takas sonrasi: a=%d b=%d\n",a,b);
    printf("takas sonrasi: &a=%p &b=%p\n",&a,&b);

    return 0;
}
