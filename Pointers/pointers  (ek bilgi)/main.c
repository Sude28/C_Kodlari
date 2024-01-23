#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[5]="ARABA";

    char *p=&dizi[0];


    for(int i=0;i<5;i++){
        printf("%c",p[i]);  // char dizisinin (int dizisi için de geçerli sadece diziyle ayný veri türünde olmalý pointer) adý yerine o diiznin ilk elemanýnýn adresini gösteren pointerin adýný kullanabiliriz
    }

    return 0;
}
