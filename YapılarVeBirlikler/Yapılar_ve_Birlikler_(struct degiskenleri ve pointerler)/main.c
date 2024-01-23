#include <stdio.h>
#include <stdlib.h>

typedef struct kapsul{
    char veri;
    struct kapsul* ptr;   //  |A|ptr|  |B|ptr|   |C|ptr|  3 kapsül tanýmladýk herbirinin pointer alaný bir sonrakinin fiziksel adresini gösteriyor bu nedenle struct kapsul* lýk alani gösteren bir pointer tanýmladik
}dugum;


int main()
{
    dugum A,B,C;   //dugum veri tipinde 3 tane tanýmladýk
    A.veri='A';    // A dugumunun veri alanini doldurduk
    B.veri='B';
    C.veri='C';

    A.ptr=&B;   // A dugumunun ptr alanini Bnin adtesi dolduruyor.
    B.ptr=&C;
    C.ptr=NULL;

    printf("A veri: %c, B veri: %c ,C veri: %c\n",A.veri,B.veri,C.veri);

    printf("A adres: %p, B adres: %p ,C adres: %p\n",&A,&B,&C);

    printf("A.ptr: %p, B.ptr: %p, C.ptr: %p\n",A.ptr,B.ptr,C.ptr);

    printf("A'nin 1 otesindeki veri: %c\n", (*(A.ptr)).veri);   //*(A.ptr) ifadesi ile a'nýn tuttugu adresteki dgere yani B kapsulune eristik ordan veri alanýný cek dedik
    printf("A'nin 1 otesindeki veri: %c\n", A.ptr->veri);       // A.ptr Anýn gosterdigi adres demek -> yapýnca o adresteki kapsule erisiyosun direk sonra da kapsul icinde neye erismek istedigini soruyor

    printf("A'nin 2 otesindeki veri: %c\n", (*((*(A.ptr)).ptr)).veri   );  //   .ptr ile  B kapsulunun icindeki pointerin degeri C kapsulunun adresi demek c kapsulunun adresine eristik sonra da o kapsuldeki degerleri al bundan veri olanýný yazdýr
    printf("A'nin 2 otesindeki veri: %c\n", A.ptr->ptr->veri);  //Anýn gosterdigi yerin gosterdigi yerdeki veriyi yaz

    return 0;
}
