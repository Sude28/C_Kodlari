#include <stdio.h>
#include <stdlib.h>

typedef struct // isim vermemiþ burda aþaðýda hepsine Ogrenci demis.
{
    int No;
    char Ad[50];
    char Soyad[50];
    int Cinsiyet;
} Ogrenci;

int main()
{
    Ogrenci ogr; // Ogrenci veri tipi int gibi ogr degisken yani struct'ýn içindekileri tutuyor.
    ogr.No = 1000;
    strcpy(ogr.Ad, "Ada");
    strcpy(ogr.Soyad,"KILINC");

    printf("Ogrencinin adi: %s\n", ogr.Ad);


    return 0;
}
