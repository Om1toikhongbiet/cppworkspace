#include <stdio.h>
int main () {
    int a, b ;
    
    scanf("%i%i",&a,&b);
   
   int tong = a + b,hieu = a-b ;
  
   


  int du = (int)a % (int)b;
  int intdiv= a/b;
  float chia = (float)a / (float)b;
   long long tich = (long long)a * (long long)b ;
    printf("%i\n%i\n%lld\n%i\n%i\n%.2f",tong , hieu , tich ,intdiv, du ,chia  );
    return 0;
    

}
