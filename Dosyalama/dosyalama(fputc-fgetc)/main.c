#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("C:\\Users\\Sude\\Desktop\\dosya.txt","w");

    if(fp==NULL){
        printf("Dosya olusturulurken hata olustu..\n");
        exit(1);
}
fputc('a',fp); //fputc ilk yerden yazd� a y�
fclose(fp);

fp=fopen("C:\\Users\\Sude\\Desktop\\dosya.txt","r"); //kapay�p bir daha acmam�z�n nedeni imlecten itibaren islem yap�l�yor imlec basa gecsin de ordan itibaren okuma olsun yani yazd�g�m�z a'y� gorebilsin diye

if(fp==NULL){
    printf("Dosya olusturulurken hata olustu..\n");
    exit(1);
}
char okunan;
okunan = fgetc(fp);
if(okunan==EOF)
    printf("Karakter okunamadi..\n");
else
    printf("Okunan karakter:%c",okunan);
fclose(fp);

    return 0;
}
