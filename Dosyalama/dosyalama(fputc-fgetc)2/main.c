#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int i;

    if((fp=fopen("C:\\Users\\Sude\\Desktop\\dosya2.txt","w")) == NULL){
        printf("Dosya açma hatasý");
        exit(1);
    }

    for(i=0;i<10;i++)
        fputc('a',fp);  //dosyaya yaziyor.
    fclose(fp);

     if((fp=fopen("C:\\Users\\Sude\\Desktop\\dosya2.txt","r")) == NULL){
        printf("Dosya açma hatasý");
        exit(1);
    }

    for(i=0;i<10;i++)
        printf("%c",fgetc(fp));   //dosyayi okuyor ekrana yazdiriyor.
    fclose(fp);




    return 0;
}
