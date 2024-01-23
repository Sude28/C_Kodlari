#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    int islem;
    float a,b,sonuc;
    if(argc==4){
        islem=atoi(argv[1]);   //argv metin tutar icinde bu nedenle atoi ileint'e cevirdik cunku islem int tipinde esitleme yapamayiz baska turlu.
        a=atof(argv[2]);      //atof da stringi doubleye ceviriyor. atoi stringi inte ceviriyordu.
        b=atof(argv[3]);
        switch(islem){
            case 1:
                sonuc=a+b;
                break;
            case 2:
                sonuc=a-b;
                break;
            case 3:
                sonuc=a*b;
                break;
            case 4:
                sonuc=a/b;
                break;
                default:
                    sonuc=-1;
        }
        printf("Sonuc: %f",sonuc);

    }
    else
        printf("Hatali sayida arguman!");
    return 0;
}
