#include<stdio.h>
#include<math.h>
int main () {
    int testcase;
    scanf("%d",&testcase);
    for( int i =1 ; i<= testcase ; i++){
        int songuyento;
        scanf ("%d",&songuyento);
        if (songuyento==2){
            printf ("YES\n");
            continue;
        }
        if(songuyento==1){
            printf ("NO\n");
        }
        if ( songuyento <=4){ for( int i = 2; i<songuyento; i++){
            if ( songuyento %i==0){
                printf ("NO\n");
                break;
            }else {
                printf ("YES\n");
                break;

        }}}else{
        for( int i = 2; i<= sqrt(songuyento); i++){
            if ( songuyento %i==0){
                printf ("NO\n");
                break;
            }else {
                printf ("YES\n");
                break;
            }
        }
    }
}}