#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sirasiz[10][51]; // 10 kelime giriyoruz her kelime 50 karakter ise  sonland�r�c� ile 51
    char sirali[10][51];

    printf("10 adet kelime girin: \n");
    for(int i=0;i<10;i++)
        gets(sirasiz[i]); // sirasiz dizisinin i. kelimesini kullan�c�dan al

    printf("Kelimelerin alfabetik sirali hali: \n");

    int enkucukindis;
    char enkucukkelime[51];//en b�y�k kelimeymi� gibi d���n�cez
    enkucukkelime[50]='\0';

    for(int i=0;i<10;i++){  //DI� D�NG�
            enkucukindis=-1;

        for(int k=0;k<50;k++)
                enkucukkelime[k]='{';// s�sl� parantez asc�� de numaras� en b�y�klerden bu nedenle en k����e en b�y�k deyip kar��la�t�rmay� ba�lat�caz

        for(int j=0;j<10;j++){   //�� D�NG�
            //sirasiz[j] ile enkucukkelime k�yaslanacak
            if(strcmp(sirasiz[j],enkucukkelime)<0){ // virg�lden �nceki sonrakinden �nce geliyorsa negatif bir de�er verir,virg�lden �nceki sonrakinden daha sonra geliyorsa pozitif bir say� verir
                strcpy(enkucukkelime,sirasiz[j]); // enkucukkelimenin �st�ne sirasiz[j] yi kopyalamak
                enkucukindis=j;

            }
    }
         for(int k=0;k<50;k++)
             sirasiz[enkucukindis][k]='{'; //sirasiz dizisinin emnkucukindisindeki kelimeyi en b�y�k kelimeye �evirmemiz laz�m bir daha onu en k���k olarak bulmamam�z i�in

         strcpy(sirali[i],enkucukkelime);
    }

    for(int i=0;i<10;i++)
        puts(sirali[i]);
    return 0;
}
