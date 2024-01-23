#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int VizeNotlar[2];
    int QuizNotlar[2];
    int Final;
} OgrenciNot;

typedef struct
{
    char telefon[50];
    char eposta[50];
} Iletisim;

typedef struct
{
    int No;
    char Ad[50];
    char Soyad[50];
    int Cinsiyet; // int tipinde Cinsiyet ad�nda bir degisken tan�mlad�k
    Iletisim OgrIletisim; // Iletisim tipinde olan OgrIletisim ad�nda bir degisken tan�mlad�k
    OgrenciNot Notlar;  //OgrenciNot tipinde olan Notlar ad�nda bir degisken tan�mlad�k
} Ogrenci;


int main()
{
    Ogrenci ogr; // Ogrenci struct'�n�n tamam�na ogr dedik
    ogr.No = 21360859017;
    strcpy(ogr.OgrIletisim.eposta, "x@y.com"); // ogr'nin icinden OgrIletisim, OgrIletisimin icinden eposta
    strcpy(ogr.OgrIletisim.telefon,"08596541742");

    ogr.Notlar.Final = 78;
    ogr.Notlar.QuizNotlar[0] = 65;
    ogr.Notlar.VizeNotlar[1] = 86;

    printf("Ogrencinin eposta adresi: %s\n", ogr.OgrIletisim.eposta);
    printf("Ogrencinin 2. vize notu: %d\n", ogr.Notlar.VizeNotlar[1]);

    return 0;
}
