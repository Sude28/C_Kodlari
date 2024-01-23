#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ara(char x[],char y[]){
    int indis[51];
    int i,j,sayac=0;

    for(i=0;i<strlen(x)-strlen(y)+1;i++){

        for(j=0;j<strlen(y);j++){
                if(x[i+j]!=y[j])// içteki for döngüsnün içinde oldugumuzdan j artýyor ama i=0 dan girdik if'e yani i deðiþmiyor bu yüzden i+j yazdýk
                     break; // ayni degillerse cik
                }

        if(j==strlen(y))  //yani ikinci metin birinci metinin içinde varmýþ 2. metinin bütün harfleri 1. metinde bulundu break çalýþmadý demek
            indis[sayac++]=i; // baþka bir dizi oluþturduk metin 1 in içinde metin2 yi bulduðumuz ilk indisi ona kaydettik

    }

    indis[sayac]=-1;// metin2 yi metin1 in içinde daha fazla bulamadým diyip -1 basýcak

    printf("Bulunan indisler: ");

    sayac=0;
    while(indis[sayac]!=-1){ //-1 yazýlana kadar indisleri yazdýr demek
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
