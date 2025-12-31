#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main () {
    int dodai;
    int sodong;
    int temp=dodai;
    scanf("%i%i",&sodong,&dodai);
    for ( int i =0; i<sodong;i++){
        for ( int k=0;k<i;k++){
          printf ("~");
        }


        for ( int j=0;j<dodai;j++){
            printf ("*");
           }
          printf ("\n");
        }
        
    }
