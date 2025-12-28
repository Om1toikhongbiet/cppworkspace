#include<stdio.h>
int main () {
    int songang,sodoc;
    scanf("%i",&songang);
    int j ;
    for ( int i =1 ; i<=songang; i++){
        if(i==1||i==songang){
            for ( j =0; j <songang; j++){
                printf ("*");

            }
            printf ("\n");
        
        }
       if ( i >1 && i <songang){
        for ( j =0; j <songang-1; j++){
            if ( j  ==0){
        printf ("*");}
        if (j ==songang-2){
            printf ("*\n");
        }
        else{
            printf (".");
        }
    }
    
}}}