#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[41]; //sonuncusu EOL
    FILE *fp;
    char*cp;
    int i;

    printf("Bir karakter dizisi giriniz (En fazla 40 karakter): ");
    gets(dizi);

     if((fp=fopen("C:\\Users\\Sude\\Desktop\\dosya1.txt","w")) == NULL){
        printf("Dosya açma hatasi");
        exit(1);
     }

     cp=dizi;
     while(*cp){
        if(fputc (*cp,fp) == EOF){ //cp'yi pointer tanımladık cünkü fputc'ye verebilmek icin yani fputc simdi dizideki karakterler olan cp'yi yazdırıcak
            printf("Dosyaya yazma hatasi\n");
            exit(1);
        }
        cp++; //her karakteri tek tek yazıyor cünkü fputc tek karakter yazar
     }
     fclose(fp);

     if((fp=fopen("C:\\Users\\Sude\\Desktop\\dosya1.txt","r")) == NULL){
        printf("Dosya açma hatasi");
        exit(1);
     }

     for( ; ; ){
         i= fgetc(fp);
         if(i == EOF) break; //okuma yapıyor fgetc eof yani sonlandırıcı karaktere gelinceye kadar
         putchar(i);  //putchar parametre olarak verilen karakteri ekrana yazdirir.
     }

     fclose(fp);


    return 0;
}
