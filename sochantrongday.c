#include<stdio.h>
#include<math.h>
int songuyenduong [101];
int songuyento (int x){
    if ( x <2){
        return 0;
    }
    for ( int i =2 ; i*i <= x ; i++){
        if ( x % i ==0){
            return 0;
        }
    }
    return 1;
}



int main () {
    int n;
    int sophantu;
    scanf ("%i",&n);
    for ( int i =1 ; i <=n; i++){
        scanf("%i",&sophantu);
        for ( int j =0 ; j<sophantu ; j ++){
            scanf("%i",&songuyenduong[j]);
        }
        for ( int k = 0; k <sophantu; k++){
            if ( songuyento (songuyenduong[k])==1){
                printf ("%i ",songuyenduong[k]);
            }
        }
        printf ("\n");

        

    }
}