#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas=25;

    printf("%p\n\n",&yas);
    char *pyas=&yas;

    printf("%p\n\n",&pyas);   //yas'ın hangi adreste oldugunu tutan pyas'ın yani pointerin adresini yazdırıyoruz
    return 0;
}
