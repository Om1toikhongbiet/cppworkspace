#include<stdio.h>
#include<math.h>
int gcd(int a, int b ){
    do{
    int d= a%b;
    a=b;
    b=d;
}while (b!=0);
return a;
}
int main (){
 int botest;
 scanf("%i",&botest);
 for(int i =1;i<=botest;i++){
    int a,b;
    scanf ("%i%i",&a,&b);
    printf ("%i\n",gcd(a,b));

 }
}