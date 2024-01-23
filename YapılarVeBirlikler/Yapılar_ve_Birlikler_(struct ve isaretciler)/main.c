#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Isim[50];
    int Yas;
} Kisi;


int main()
{
    Kisi k;  //Kisi struct'ýn adý yani Kisi bir veri tipi int gibi. k da char isim ve int yas'ý tutuyor.
    Kisi *pk;

    pk=&k; // k'nýn adresini de pk tutuyor
    strcpy(k.Isim,"ahmet");

    // 3 farklý sekilde uyelere ulasýp atama yapabiliriz;
    k.Yas = 19;
    printf("yas:%d\n",k.Yas);

    pk-> Yas = 20;
    printf("yas:%d\n", pk->Yas);

    (*pk).Yas = 21;
    printf("yas:%d\n",(*pk).Yas);  // (*pk)= k  pk'nýn tutuðu deðer k'ya esittir
    return 0;
}
