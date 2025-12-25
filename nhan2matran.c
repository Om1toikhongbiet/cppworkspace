#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main () {
    int n=0,p=0;
    int sohang, giua, socot;
    scanf("%d%d%d", &sohang, &giua, &socot);
    int a[sohang][giua], b[giua][socot], c[sohang][socot];
    for ( int i = 0; i < sohang; i++ ) {
        for ( int j = 0; j < giua; j++ ) {
            scanf("%d", &a[i][j]);
        }
    }
    for ( int i = 0; i < giua; i++ ) {
        for ( int j = 0; j < socot; j++ ) {
            scanf("%d", &b[i][j]);
        }
    }
    for ( int hang = 0; hang < sohang; hang++ ) {
         int tong =0;
        for ( int cot = 0; cot < socot; cot++ ) {
          int temp = a[hang][cot]*b[cot][hang];
          
             tong +=temp;

        }
        c[n][p] = tong;
        p++;
        if ( p == socot ) {
            p = 0;
            n++;
        }
    }
    for ( int i = 0; i < sohang; i++ ) {
        for ( int j = 0; j < socot; j++ ) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}