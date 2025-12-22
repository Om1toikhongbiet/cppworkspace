#include <stdio.h>
#include <math.h>

int songuyento(long long num) {
    if (num < 2) return 0;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;}
int sodep(long long n) {
    long long reverse = 0, temp = n;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return (reverse == n);
}
int main () {
    int testcase;
    scanf("%d",&testcase);
    int cantrai;
    int canphai;
    for( int i =1 ; i<= testcase ; i++){
         int count =0;
    scanf ("%i%i",&cantrai,&canphai);
        for ( int a = cantrai ; a<= canphai ; a++ ) {
          
        if (songuyento(a) && sodep(a)) {
            printf("%i ",a);
         
        count++;
        if (count ==10){
            printf ("\n");
            count=0;
        }
    }
    } printf ("\n\n");
    }

}
