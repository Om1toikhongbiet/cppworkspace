#include<stdio.h>
int main (){
	int testcase;
	scanf("%i",&testcase);
	for ( int j =0; j<testcase;j++){
	int xs;
	scanf("%i",&xs);
	int array[xs];
	
	
	for (int i=0;i<xs;i++){
			scanf("%i",&array[i]);
			
	
	
	}
	int solon=0;
	for ( int i =0;i<xs;i++){
		if ( array[i]>solon){
			solon=array[i];
		
		}
	
	
	}
	printf("%i\n",solon);
	for ( int i =0;i<xs;i++){
		if (array[i]==solon){
			printf ("%i ",i);
		
		}
	
	
}
printf("\n");
}
}










