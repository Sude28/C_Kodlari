#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas=25;

    printf("%p\n\n",&yas);
    char *pyas=&yas; // pyas ya��n adresini tutan bir degisken. Y�a char g�ziyle bak�yor yani 1 baytm�� gibi ama yas int yani 4 byte bu nedenle sadece ilk g�zdeki de�eri yazd�r�r pyas �n �n�nde * oldugundan (25/0/0/0 --> ram'deki s�ralanma)
    printf("%d\n\n",*pyas);

    pyas++; // adresi bir artt�rd�k yani bir sonraki ram g�z�ne ge�tik ve sonra ordaki de�eri yazd�rd�k
    printf("%p",pyas);

}
