#include<stdio.h>

#include<math.h>
#include<string.h>
int main () {
    int matranvuong;
    int temp;
    scanf ("%d", &matranvuong);
    int a[matranvuong][matranvuong];
   
    for (int i =0; i<matranvuong;i++){
        for(int j=0;j<matranvuong;j++){
            scanf ("%d", &a[i][j]);
        }
    }
        for (int i =0; i<matranvuong;i++){
           temp = a[i][i];
           a[i][i] = a[i][matranvuong - i - 1];
           a[i][matranvuong - i - 1] = temp;
       
    }
     for (int i =0; i<matranvuong;i++){
        for(int j=0;j<matranvuong;j++){
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
}