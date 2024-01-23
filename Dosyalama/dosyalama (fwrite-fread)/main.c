#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    char y;
} Nesne;

void main()
{
    srand(time(NULL));
    Nesne dizi1[10],dizi2[10];

    for(int i=0;i<10;i++){
        dizi1[i].x=rand()%10+1;
        dizi1[i].y=rand()%26+65;
        printf("Nesne%2d: %d, %c\n",i+1,dizi1[i].x,dizi1[i].y);
    }

   FILE *fp;



    fp=fopen("Ikili.txt","w+");
    fwrite(dizi1,sizeof(Nesne),10,fp);
    fseek(fp,0,SEEK_SET);
    fread(dizi2,sizeof(Nesne),10,fp);
    fclose(fp);


     for(int i=0;i<10;i++){
        dizi2[i].x=rand()%10+1;
        dizi2[i].y=rand()%26+65;
        printf("Nesne%2d: %d, %c\n",i+1,dizi2[i].x,dizi2[i].y);
    }





    return 0;
}
