#include<stdio.h>
#include<math.h>
int main () {
    int testcase;
    scanf ("%i",&testcase);
    for ( int i =1 ; i <=testcase; i++){
    int duoi1, duoi2, tren1, tren2;
    scanf ("%i%i%i%i",&duoi1,&duoi2,&tren1,&tren2);
    if(tren1-duoi1==tren2-duoi2){
        printf ("YES\n");
    }
    else{
        printf ("NO\n");
    }
}}