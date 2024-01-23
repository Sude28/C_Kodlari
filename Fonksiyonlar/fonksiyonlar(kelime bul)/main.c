#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ara(char x[],char y[]){
    int indis[51];
    int i,j,sayac=0;

    for(i=0;i<strlen(x)-strlen(y)+1;i++){

        for(j=0;j<strlen(y);j++){
                if(x[i+j]!=y[j])// i�teki for d�ng�sn�n i�inde oldugumuzdan j art�yor ama i=0 dan girdik if'e yani i de�i�miyor bu y�zden i+j yazd�k
                     break; // ayni degillerse cik
                }

        if(j==strlen(y))  //yani ikinci metin birinci metinin i�inde varm�� 2. metinin b�t�n harfleri 1. metinde bulundu break �al��mad� demek
            indis[sayac++]=i; // ba�ka bir dizi olu�turduk metin 1 in i�inde metin2 yi buldu�umuz ilk indisi ona kaydettik

    }

    indis[sayac]=-1;// metin2 yi metin1 in i�inde daha fazla bulamad�m diyip -1 bas�cak

    printf("Bulunan indisler: ");

    sayac=0;
    while(indis[sayac]!=-1){ //-1 yaz�lana kadar indisleri yazd�r demek
        printf("%d ",indis[sayac]);
        sayac++;

    }
}

int main()
{
    char metin1[51],metin2[51];
    printf("Ilk metni gir:");
    gets(metin1);
    printf("Ikinci metni gir:");
    gets(metin2);

    ara(metin1,metin2);

    return 0;
}
