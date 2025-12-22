#include<stdio.h>
#include<math.h>
int a[2];
int main (){
    
    for ( int i =0 ; i <=2; i++){
    scanf ("%i",&a[i]);
    
}
for (int j =0; j<=2;j++){
    if(a[j]<=a[j+1]){
        int temp = a[j];
        a[j]= a[j+1];
        a[j+1]= temp;
    }
else{
    continue;}
}
printf ("%i ", a[2]);
}