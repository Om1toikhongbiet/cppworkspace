#include<stdio.h>
#include<math.h>
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int main (){
    int botest;
    scanf("%i",&botest);
    for(int i =1;i<=botest;i++){
        int a,b;
        scanf ("%i%i",&a,&b);
        printf ("%i\n",lcm(a,b));
    }
}