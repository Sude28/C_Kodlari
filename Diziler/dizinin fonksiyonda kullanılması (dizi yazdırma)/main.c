#include <stdio.h>
#include <stdlib.h>


void dizi_yaz(float x[], int n) // her zaman dizinin boyutunun bilinmesi gereklidir
{
int i;
for(i=0;i<n;i++)
    printf("%.2f \n",x[i]);
printf("\n");
}

int main()
{
    float dizi[5]={8.471, 3.683, 9.107, 4.739, 3.918 };
    dizi_yaz(dizi,5);
    return 0;
}
