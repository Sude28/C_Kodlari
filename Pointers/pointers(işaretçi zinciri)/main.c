#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int **pp;
    int val = 1903;

    p= &val;  //p i�aret�isine val adresi ataniyor
    pp= &p;   //pp i�aret�isine p i�aret�isinin adresi ataniyor

    printf("Degerler: \n*******\n");
    printf("val = %d\n",val);
    printf("*p = %d\n",*p);  // p'de val�n adresi var �n�ne* koyunca val'�n degeri oluyor
    printf("**pp = %d\n",**pp);//pp'de p'nin adresi var **pp diyince p'nin degeri olmu� oluyor o da val�n degerine esit
    printf("\nAdresler:\n*******\n");
    printf("&val = %p\n", &val);
    printf("p = %p\n",p);
    printf("&p = %p\n",&p);
    printf("pp = %p\n",pp);




    return 0;
}
