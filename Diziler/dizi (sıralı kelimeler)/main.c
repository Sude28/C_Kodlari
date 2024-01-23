#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sirasiz[10][51]; // 10 kelime giriyoruz her kelime 50 karakter ise  sonlandýrýcý ile 51
    char sirali[10][51];

    printf("10 adet kelime girin: \n");
    for(int i=0;i<10;i++)
        gets(sirasiz[i]); // sirasiz dizisinin i. kelimesini kullanýcýdan al

    printf("Kelimelerin alfabetik sirali hali: \n");

    int enkucukindis;
    char enkucukkelime[51];//en büyük kelimeymiþ gibi düþünücez
    enkucukkelime[50]='\0';

    for(int i=0;i<10;i++){  //DIÞ DÖNGÜ
            enkucukindis=-1;

        for(int k=0;k<50;k++)
                enkucukkelime[k]='{';// süslü parantez ascýý de numarasý en büyüklerden bu nedenle en küçüðe en büyük deyip karþýlaþtýrmayý baþlatýcaz

        for(int j=0;j<10;j++){   //ÝÇ DÖNGÜ
            //sirasiz[j] ile enkucukkelime kýyaslanacak
            if(strcmp(sirasiz[j],enkucukkelime)<0){ // virgülden önceki sonrakinden önce geliyorsa negatif bir deðer verir,virgülden önceki sonrakinden daha sonra geliyorsa pozitif bir sayý verir
                strcpy(enkucukkelime,sirasiz[j]); // enkucukkelimenin üstüne sirasiz[j] yi kopyalamak
                enkucukindis=j;

            }
    }
         for(int k=0;k<50;k++)
             sirasiz[enkucukindis][k]='{'; //sirasiz dizisinin emnkucukindisindeki kelimeyi en büyük kelimeye çevirmemiz lazým bir daha onu en küçük olarak bulmamamýz için

         strcpy(sirali[i],enkucukkelime);
    }

    for(int i=0;i<10;i++)
        puts(sirali[i]);
    return 0;
}
