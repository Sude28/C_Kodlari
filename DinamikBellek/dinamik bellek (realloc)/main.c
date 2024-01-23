#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;

    p=(char*) malloc(sizeof(char)*10);
    strcpy(p,"Algoritma");
    printf("Deger = %s , Adres = %p\n",p,p);

    p=(char*)realloc(p,25);

    strcat(p,"veProgramlama");
    printf("Deger = %s , Adres = %p\n",p,p);

    free(p);

    return 0;
}
