#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;


    if((fp=fopen("C:\\Users\\Sude\\Desktop\\dosya1.txt","rb")) == NULL){
        printf("Dosya a�ma hatasi");
        exit(1);
    }

    return 0;
}
