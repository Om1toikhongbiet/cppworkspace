#include<stdio.h>
#include<math.h>
int kc[8];
int main () {
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf ("%i%i%i%i%i%i%i%i",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    int kc1,kc2,kc3,kc4,kc5,kc6,kc7,kc8;
    kc[0]=abs(x2-x1);
    kc[1]=abs(x2-x3);
    kc[2]=abs(x4-x1);
    kc[3]=abs(x4-x3);
    kc[4]=abs(y2-y1);
    kc[5]=abs(y2-y3);
    kc[6]=abs(y4-y1);
    kc[7]=abs(y4-y3);
for( int i =0 ; i <7 ; i++){
    for ( int j = i+1 ; j <8 ; j++){
        if ( kc[i]>kc[j]){
            int temp = kc[i];
            kc[i]=kc[j];
            kc[j]=temp;
        }
    }
}
int dientich=kc[7]*kc[7];
printf("%i",dientich);}