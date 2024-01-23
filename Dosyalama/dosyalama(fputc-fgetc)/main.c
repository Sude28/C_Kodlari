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
fputc('a',fp); //fputc ilk yerden yazdý a yý
fclose(fp);

fp=fopen("C:\\Users\\Sude\\Desktop\\dosya.txt","r"); //kapayýp bir daha acmamýzýn nedeni imlecten itibaren islem yapýlýyor imlec basa gecsin de ordan itibaren okuma olsun yani yazdýgýmýz a'yý gorebilsin diye

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
