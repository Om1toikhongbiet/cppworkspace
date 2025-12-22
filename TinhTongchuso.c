#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    
    printf("Nhap so can tinh tong cac chu so: ");
    scanf("%d", &n);
    
    
    n = abs(n);
    
    
    while(n > 0) {
        sum += n % 10; 
        n /= 10;           }
    if(sum%10 ==0){
        printf("Yes");
    }else{
        printf("No");
    }
    
    
     
    return 0;
}