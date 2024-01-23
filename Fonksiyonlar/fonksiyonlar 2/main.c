#include <stdio.h>
#include <stdlib.h>

int main()
{
   mesaj(); //mesaj fonksiyonuna gec direk
   printf("Hos geldiniz...\n");
   return 0;
}

void mesaj()
{
    printf("Algoritma");
    mesaj2(); // mesaj fonksiyonu bittikten sonra mesaj2 ye gec
}

void mesaj2()
{
    printf(" ve Programlama"); // mesaj2 yi bitirdikten sonra da en basta fonksiyon karsýna cýktýgýndan oynatamadýgýn kodlarý oynat
}
