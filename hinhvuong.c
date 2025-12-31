#include<stdio.h>
#include<math.h>
#include<string.h>
int main () {
	int input;
	scanf("%i",&input);
	int sodong=input *2-1;
	int a[sodong+1];
	int temp=0;
	for( int k=0; k<sodong;k++){
	if( k<(sodong+1)/2){
		for ( int i =temp; i<sodong-temp;i++){
		a[i]=input;
		
		}
		for ( int l=0; l<sodong;l++){
			printf("%i",a[l]);
		}
		
	input--;
	temp++;
	printf ("\n");
	}
	else{
		while(input<2){
			input++;
		}
		temp--;
	
	
		for ( int i =temp; i<sodong-temp;i++){
			
		a[i]=input;
		
		}
	
		input++;
		for ( int l=0; l<sodong;l++){
			printf("%i",a[l]);
		
	}
	printf("\n");
	}
	
	
}}
