#include<stdio.h>
#include<math.h>
int main () {
    int n;
    scanf ("%i",&n);
    int a[n][n];
    for ( int i =0 ; i <n ; i++){
           int k =1;
        for ( int j =0 ; j <n ; j++){
            if(j<=i){
                a[i][j]=0;
            }else{
                
             
                    a[i][j]=k;
                    k++;
            }
        }
    }
    for ( int i =0 ; i <n ; i++){
        for ( int j =0 ; j <n ; j++){
            printf ("%i ",a[i][j]);
        }
        printf ("\n");
    }
}