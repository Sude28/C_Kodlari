#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(int argc, char* argv[])  //ilk parametere kaç tane arguman verdigimizi gosteren argc'dir. argv[] de parametrelerin degerlerini tutar
{
    for(int i=0;i<argc;i++)
        printf("%s\n",argv[i]);  //argv degerleri tuttugu icin onu yazdýrdýk  //argv[0] programýn bulundugu dosyanýn adýdýr. // Calýstýrýlan kodun hangi dosya icinde oldugunu anlamak icin kullanilabilir

    char dizinadi[100];
    strcpy(dizinadi,"./");  //dizinadi adlý karakter dizisinde artýk ./ var
    strcat(dizinadi,argv[1]);  //benim klasorum adlý metin argv isimli metin matrisinin 1. satýrýnda kayýtlý bu yüzden ./ ile argv yi birleþtirdik yani " ./benim_klasörüm " oldu
    puts(dizinadi);

    mkdir(dizinadi);   //Klasor olusturmak icin gerekli komut 'mkdir'   //mkdir("./klasorun_adi") olmalý



    return 0;
}
