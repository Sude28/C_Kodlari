#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char metin1[100],metin2[100];

    printf("Ilk metni gir:");
    gets(metin1);
    printf("Ikinci metni gir:");
    gets(metin2);

    int a=strlen(metin1);
    int b=strlen(metin2);

    char *birlesik=(char *)malloc((a+b+1)*sizeof(char));

    strcpy(birlesik,metin1);
    strcpy(birlesik+a,metin2); //birlesik bir dizinin baslangýc adresini tutan bir pointer //birlesik+metin1 kadar otesine metin2'yi yapýstýrdýk  ##  bursa/ + teknýk/ = bursateknýk/ t bursa'nýn törmineyting karakterinin ustune geldi böykece bir tane törmineyting oldu.

    puts(metin1);
    puts(metin2);
    puts(birlesik);

    return 0;
}
