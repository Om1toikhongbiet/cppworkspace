#include<stdio.h>
#include<math.h>
void phantichtoiuu(int n){
    while ( n%2==0){
        printf ("2 ");
        n = n/2;
    
    }
    for ( int i=3;i<=sqrt(n);i+=2){
        while ( n%i==0){
            printf ("%i ",i);
            n = n/i;
        }
    }
    if (n>1){
        printf ("%i ",n);
    }
}
int main () {
   int testcase;
   scanf("%i",&testcase);
   while(testcase>0){
    int so;
    scanf("%i",&so);
    phantichtoiuu(so);
    printf ("\n");













































    testcase--;
   }
}