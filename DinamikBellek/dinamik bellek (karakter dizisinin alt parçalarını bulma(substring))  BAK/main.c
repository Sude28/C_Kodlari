#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* SubString(char *dizikopya, int pozisyon, int uzunluk){  //dizi kopya dedigimiz dizi2 dizi'yi de dizi2'ye atamýsdýk


     for(int i=0;i<uzunluk;i++)
            dizikopya[i]=dizikopya[i+pozisyon]; //istedigimiz pozisyondan baþlayan istedigimiz uzunluk kadar olan yeri kopyalayýp basa yapýþtýrýyoruz sonra baþtan uzunluk kadar olan yeri alcaz

     dizikopya[uzunluk]='\0';

     dizikopya=(char *)realloc(dizikopya,uzunluk+1);  //dizikopya dizisinin uzunluk kadar olmasýný istiyoruz cunku kopyaladıgımız kısım basta devamı onceden gelen o gıtsın dıye
     return dizikopya;

}

int main()
{
    char dizi[100];
    int pozisyon,uzunluk;

    printf("Metni giriniz: ");
    gets(dizi);

    char *dizi2=(char*)malloc((strlen(dizi)+1)*sizeof(char));  //+1'in sebebi sonlandýrýcý karakter
    strcpy(dizi2,dizi); //önce hedef sonra kaynak

    printf("Kopyalama pozisyonunu giriniz: ");
    scanf("%d",&pozisyon);
    pozisyon--; //ilk harf sýfýrýncý eleman oldugu icin

    printf("Kopyalama uzunlugunu giriniz: ");
    scanf("%d",&uzunluk);

    char *gptr=SubString(dizi2,pozisyon,uzunluk); // dönen pointer oldugu icin pointere esitledik

    printf("Kopyalanan metin:");
    puts(gptr);

    return 0;
}
