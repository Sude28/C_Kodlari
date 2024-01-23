#include <stdio.h>
#include <stdlib.h>

enum eBolumler
{
    programcilik,
    donanim,
    muhasebe,
    buro
};

int main()
{
    enum eBolumler bolum_degiskeni;

    bolum_degiskeni = donanim;
    printf("Bolum : %d\n",bolum_degiskeni);

    bolum_degiskeni += 2;
    printf("Yeni bolum : %d\n",bolum_degiskeni);
    return 0;
}
