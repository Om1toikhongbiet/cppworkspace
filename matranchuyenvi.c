#include<stdio.h>
#include<string.h>
int main () {
    int testcase;
    scanf("%i",&testcase);
    for(int l =1; l<=testcase;l++){
       

    
    int sohang,socot;
    scanf("%i %i",&sohang,&socot);
    int a[sohang][socot];
  
    for(int i =0; i<sohang;i++){
        for(int j =0;j<socot;j++){
            scanf("%i",&a[i][j]);
          
        }
    }
     printf("Test %i:\n",l);
       for(int i =1; i<sohang;i++){
        for(int j =1;j<socot;j++){
            printf("%i ",a[i][j]);
        }
    printf("\n");}
    }

}