#include <stdio.h>
#include <stdlib.h>

void tersyaz(char x[],int y){ // recursive fonksiyonlarda kural ilk satýrda fonksiyon adýný yaz altýnda nereye kadar çalýþacaðýný yaz
    if(y>0){ // y=0 olursa x'in -1.elemaný oluyor o yüzden oraya kadar devam eder
    printf("%c",x[y-1]); //kelime merhaba olsun yani merhaba x dizisi y-1 de son eleman yani a demek
    tersyaz(x,y-1); // ayný fonksiyonu bir daha çaðýrdýk bu sefer merhab kelime yukarýdaki gibi dusunucez b yi basýcak
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
