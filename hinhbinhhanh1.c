#include<stdio.h>
int main () {
    int sosao,sodoc;
    scanf("%i %i",&sosao,&sodoc);
    int j ;
    for ( int i =1 ; i<=sodoc; i++){
        if(i==1||i==sodoc){
            for ( j =0; j <sosao; j++){
                printf ("*");

            }
            printf ("\n");
        
        }
       if ( i >1 && i <sodoc){
        for ( j =0; j <sosao; j++){
            if ( j  ==0){
        printf ("*");}
        if (j ==sosao-2){
            printf ("*\n");
        }
        else{
            printf (" ");
        }
    }
    
}}}