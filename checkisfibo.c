#include<stdio.h>
#include<string.h>



long long a[92];
void sangfino() {

        
       
	a[0]=0;
	a[1]=1;
	
	for ( int i=2; i<92; i++){
		a[i]=a[i-1]+a[i-2];
		
		
	}

	
}

int main () {
	sangfino();
	int b;
	scanf("%i",&b);
    for ( int i =0;i<b;i++){

        printf("%lld ",a[i]);
    }
}