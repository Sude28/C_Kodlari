#include <stdio.h>
#include <stdlib.h>

void tersyaz(char x[],int y){ // recursive fonksiyonlarda kural ilk sat�rda fonksiyon ad�n� yaz alt�nda nereye kadar �al��aca��n� yaz
    if(y>0){ // y=0 olursa x'in -1.eleman� oluyor o y�zden oraya kadar devam eder
    printf("%c",x[y-1]); //kelime merhaba olsun yani merhaba x dizisi y-1 de son eleman yani a demek
    tersyaz(x,y-1); // ayn� fonksiyonu bir daha �a��rd�k bu sefer merhab kelime yukar�daki gibi dusunucez b yi bas�cak
    }
}


int main()
{
    char metin[101];
    printf("Bir metin giriniz: ");
    gets(metin);

    tersyaz(metin,strlen(metin));
    return 0;
}
