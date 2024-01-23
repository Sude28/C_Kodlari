#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(int argc, char* argv[])  //ilk parametere ka� tane arguman verdigimizi gosteren argc'dir. argv[] de parametrelerin degerlerini tutar
{
    for(int i=0;i<argc;i++)
        printf("%s\n",argv[i]);  //argv degerleri tuttugu icin onu yazd�rd�k  //argv[0] program�n bulundugu dosyan�n ad�d�r. // Cal�st�r�lan kodun hangi dosya icinde oldugunu anlamak icin kullanilabilir

    char dizinadi[100];
    strcpy(dizinadi,"./");  //dizinadi adl� karakter dizisinde art�k ./ var
    strcat(dizinadi,argv[1]);  //benim klasorum adl� metin argv isimli metin matrisinin 1. sat�r�nda kay�tl� bu y�zden ./ ile argv yi birle�tirdik yani " ./benim_klas�r�m " oldu
    puts(dizinadi);

    mkdir(dizinadi);   //Klasor olusturmak icin gerekli komut 'mkdir'   //mkdir("./klasorun_adi") olmal�



    return 0;
}
