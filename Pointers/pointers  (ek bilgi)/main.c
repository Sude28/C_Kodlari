#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[5]="ARABA";

    char *p=&dizi[0];


    for(int i=0;i<5;i++){
        printf("%c",p[i]);  // char dizisinin (int dizisi i�in de ge�erli sadece diziyle ayn� veri t�r�nde olmal� pointer) ad� yerine o diiznin ilk eleman�n�n adresini g�steren pointerin ad�n� kullanabiliriz
    }

    return 0;
}
