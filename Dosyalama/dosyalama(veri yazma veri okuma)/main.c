#include <stdio.h>
#include <stdlib.h>


typedef struct Ogrenci_data{
    int No;
    char Ad[51];
    int Not;
} Ogrenci;


Ogrenci* ogrenciler ;   //fonsiyonlarda da kullanacagimiz icin ikisini de global degisken yaptik.
int ogrenci_sayisi ;

void DosyaYaz(){
    printf("OGRENCIBILGILERINI GIRINIZ:\n-----------------------------------------------------\n");

    for(int i=0;i<ogrenci_sayisi;i++){
        printf("%d. OGRENCI NO: ",i+1);
        scanf("%d",&ogrenciler[i].No);
        printf("%d. OGRENCI ADI: ",i+1);
        scanf("%s",&ogrenciler[i].Ad);
        printf("%d. OGRENCI NOTU: ",i+1);
        scanf("%d",&ogrenciler[i].Not);
        printf("\n");
    }

    FILE *fptr=fopen("ogrenci_bilgi.txt","w");
    if(fptr==NULL)
        printf("Dosya acilamadi");
    else
    {

        for(int i=0;i<ogrenci_sayisi;i++){
            fprintf(fptr,"%d\t%s\t%d\n",ogrenciler[i].No,ogrenciler[i].Ad,ogrenciler[i].Not);

        }
        fclose(fptr);
        printf("OGRENCI BILGILERI KAYDEDILDI!!!");
    }
    }

void DosyaOku() {
    printf("\n\nOGRENCÝ BÝLGILERI DOSYADAN OKUNUYOR!!!\n\n");
    printf("OGRENCI BILGILERI\n-------------------------------\n\n");

    int numara,notu;
    char ismi[51];

    FILE *fptr=fopen("ogrenci_bilgi.txt","r");

    if(fptr==NULL)
        printf("Dosya acilamadi");
    else{
        for(int i=0;i<ogrenci_sayisi;i++){
            fscanf(fptr,"%d\t%s\t%d\n",&numara,ismi,&notu); //struct'ye gerek yok cunku suan dosyada var onkar dosyayý okuyoruz. struct sayesinde dosyaya yazdirdik bitti.
            printf("No: %d\nAd: %s\nNot: %d\n\n",numara,ismi,notu);
    }
        fclose(fptr);
}
}

int main()
{
    printf("Kac ogrenci var?");
    scanf("%d",&ogrenci_sayisi);

    ogrenciler=(Ogrenci*)malloc(ogrenci_sayisi*sizeof(Ogrenci));      //Ogrenci veri tipinde ogrenciler pointeri


    DosyaYaz();
    DosyaOku();

    return 0;
}
