#include<stdio.h>
#include<math.h>
int main (){
    int botest;
    int lcm,gcd;
    scanf("%i",&botest);
    for(int i =1;i<=botest;i++){
        int a,b;
        scanf ("%i%i",&a,&b);
        int gcd;
        int min = (a<b)? a:b;
        for ( int j =1 ; j<= min ; j++){
            if ( a % j==0 && b % j==0){
                gcd = j;
            }
        }
        printf("%lld ",lcm= (a*b)/gcd);
        printf ("%lld\n",gcd);
       
    }
}