#include<stdio.h>
int main (){
	int sohang,socot;
	scanf("%i%i",&sohang,&socot);
	int cotdoi1,cotdoi2;
	
	int a[sohang][socot];
	for( int i =0;i<sohang;i++){
		for( int j=0;j<socot;j++){
			scanf("%i",&a[i][j]);
		}
	}
    scanf("%i%i",&cotdoi1,&cotdoi2);
   
	for ( int i=0;i<sohang;i++){
		int temp;
		temp=a[i][cotdoi1-1];
		a[i][cotdoi1-1]=a[i][cotdoi2-1];
		a[i][cotdoi2-1]=temp;
	
	}
	for( int i =0;i<sohang;i++){
		for( int j=0;j<socot;j++){
			printf("%i ",a[i][j]);
		}
        printf("\n");
	}
	

}