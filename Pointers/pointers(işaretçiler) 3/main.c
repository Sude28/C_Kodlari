#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas=25;

    printf("%p\n\n",&yas);
    char *pyas=&yas;

    printf("%p\n\n",&pyas);   //yas'�n hangi adreste oldugunu tutan pyas'�n yani pointerin adresini yazd�r�yoruz
    return 0;
}
