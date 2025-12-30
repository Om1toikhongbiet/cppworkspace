#include<stdio.h>
int main () {
    int dodai;
    int sodong;
    scanf("%i%i",&sodong,&dodai);
    for ( int i =sodong; i>0;i--){
        for ( int k=0;k<i-1;k++){
          printf ("~");
        }


        for ( int j=0;j<dodai;j++){
            printf ("*");
           }
          
        }
        printf ("\n");
    }
