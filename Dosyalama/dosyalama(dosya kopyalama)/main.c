#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr_kaynak,*fptr_hedef;

    fptr_kaynak=fopen("ogrenci_bilgi.txt","r");
    if(fptr_kaynak==NULL)
        printf("ogrenci_bilgi.txt dosyasi acilamadi!");
    else{
        fptr_hedef=fopen("ogrenci_bilgi_kopya.txt","w");
        if(fptr_hedef==NULL)
            printf("Kopya dosya olusturulamad�!");
        else{
            char temp;
            while(!feof(fptr_kaynak)){  //while'nin icindeki ifadenin anlami kaynak dosyasinin sonuna gelinmedigi s�rece demektir onunde unlem oldugu icin.
                temp=fgetc(fptr_kaynak);
                if(temp!=EOF)            //EOF karakterini okuyup yaz�yor sonra sonland�r�yordu bu y�zden eof'a esit olmayana kadar cal�s dedik. Bunu yazd�g�m�z icin while(1) yazabiliriz sonsuz dongu acar�z else alt�na da break ekleriz eof'a kadar yazm�s oluruz.
                fputc(temp,fptr_hedef);

            }
            fclose(fptr_hedef);

        }
        fclose(fptr_kaynak);



    }
    return 0;
}
