#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas=25;

    printf("%p\n\n",&yas);
    char *pyas=&yas; // pyas yaþýn adresini tutan bir degisken. Yþa char göziyle bakýyor yani 1 baytmýþ gibi ama yas int yani 4 byte bu nedenle sadece ilk gözdeki deðeri yazdýrýr pyas ýn önünde * oldugundan (25/0/0/0 --> ram'deki sýralanma)
    printf("%d\n\n",*pyas);

    pyas++; // adresi bir arttýrdýk yani bir sonraki ram gözüne geçtik ve sonra ordaki deðeri yazdýrdýk
    printf("%p",pyas);

}
