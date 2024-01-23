#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=8;
    int *ptr1=&x;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;

    printf("%p : %d\n",&x,x);
    printf("%p : %p\n",&ptr1,ptr1);  //ptr1 pointerinin kendi adresi ve yan�nda da tuttu�u adres yani x'in adresi
    printf("%p : %p\n",&ptr2,ptr2);
    printf("%p : %p\n",&ptr3,ptr3);

    printf("\n\n");

    printf("ptr1 uzerinden x: %d\n",*ptr1 );
    printf("ptr2 uzerinden x: %d\n",**ptr2 );
    printf("ptr3 uzerinden x: %d\n",***ptr3 );

    ptr3=&ptr1;  // ptr2'yi aradan kald�rmak istedigimizde yapar�z

    printf("ptr3 uzerinden x: %d\n",**ptr3 );

    ptr3=ptr2; // ��nk� ptr2 ptr1'in adresini tutuyor e�itleme yap�nca art�k ptr3 ptr1'in adresini tutuyor oluyor

    printf("ptr3 uzerinden x: %d\n",**ptr3 );
    return 0;
}
