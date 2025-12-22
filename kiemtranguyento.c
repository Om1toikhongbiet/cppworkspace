#include<stdio.h>
#include<math.h>
int songuyento (int x){
    if ( x <2){
        return 1;
    }
    for ( int i =2 ; i*i <= x ; i++){
        if ( x % i ==0){
            return 1;
        }
    }
    return 0;
}

int main () {
    int a , b;
    scanf ("%i%i",&a,&b);
    int matrix[a][b];
 for( int i =0 ; i <a ; i++){
    for ( int j =0 ; j <b ; j++){
        scanf ("%i",&matrix[i][j]);
    }
 }
 for( int i =0 ; i <a ; i++){
    for ( int j =0 ; j <b ; j++){
        if ( songuyento (matrix[i][j])){
            matrix[i][j]=0;
        }else{
            matrix[i][j]=1;
        }
    }
}
    for( int i =0 ; i <a ; i++){
        for ( int j =0 ; j <b ; j++){
            printf ("%i ",matrix[i][j]);
        }
        printf ("\n");
    }
}