#include <stdio.h>
#include <stdlib.h>

int main()
{
   // girdi alma
   int n;
   scanf("%d",&n);
   int a[20],b[20]; //max 20 olmalý diyor soruda o yüzden
   for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++){
       scanf("%d",&b[i]);
   }

   int max=0, index=0 ;
   for(int i=0;i<n;i++){
        int carpim = a[i]*b[i];
        if (carpim < max){
            max = carpim;
            index = i;
        }
   }
   printf("%d\n",index);





    // girdi alma
    //int n;
   // scanf("%d", &n);
    //int a[20], b[20];
    //for (int i = 0; i < n; i++) {
       // scanf("%d", &a[i]);
    //}
    //for (int i = 0; i < n; i++) {
        //scanf("%d", &b[i]);
    //}

    // ana algoritma
    //int max = -1, index = -1;
    //for (int i = 0; i < n; i++) {
        //int carpim = a[i] * b[i];
        //if (carpim > max) {
            //max = carpim;
            //index = i;
        //}
    //}
    //printf("%d\n", index);
    //return 0;






    return 0;
}
