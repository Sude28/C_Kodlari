#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int **pp;
    int val = 1903;

    p= &val;  //p iþaretçisine val adresi ataniyor
    pp= &p;   //pp iþaretçisine p iþaretçisinin adresi ataniyor

    printf("Degerler: \n*******\n");
    printf("val = %d\n",val);
    printf("*p = %d\n",*p);  // p'de valýn adresi var önüne* koyunca val'ýn degeri oluyor
    printf("**pp = %d\n",**pp);//pp'de p'nin adresi var **pp diyince p'nin degeri olmuþ oluyor o da valýn degerine esit
    printf("\nAdresler:\n*******\n");
    printf("&val = %p\n", &val);
    printf("p = %p\n",p);
    printf("&p = %p\n",&p);
    printf("pp = %p\n",pp);




    return 0;
}
