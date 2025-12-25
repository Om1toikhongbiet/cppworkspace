#include<stdio.h>
#include<string.h>
int main () {
 
    int n,m;
    scanf("%d%d",&n,&m);
       int a[n][m];
       for ( int i =0;i<n; i ++){
        for ( int j =0;j<m; j++){
            scanf("%d",&a[i][j]);
        }
       }
       int  hang1, hang2;
       scanf("%i %i",&hang1,&hang2);
       for ( int j =0; j < m;j++){
        int temp = a[hang1-1][j];
        a[hang1-1][j] = a[hang2-1][j];
        a[hang2-1][j] = temp;
       }
        for ( int i =0;i<n; i ++){
        for ( int j =0;j<m; j++){
            printf("%d ",a[i][j]);
            
        }
        printf ("\n");
       }

}