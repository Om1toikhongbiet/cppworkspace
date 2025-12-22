#include <stdio.h>
#include <string.h>

int main() {
    int num ; 
    scanf("%i", &num); // Example number
    char str[20];
    sprintf(str, "%d", num);  // Convert to string
    int len = strlen(str);
    
    // Store digits in array
    int digits[len];
    for (int i = 0; i < len; i++) {
        digits[i] = str[i] - '0';
    }
    
    // Swap first and last digits
    if (len > 1) {
        int temp = digits[0];
        digits[0] = digits[len - 1];
        
        digits[len - 1] = temp;
    }
    
    // Reconstruct number
    for ( int l=0; l < len;l++){
        printf("%d", digits[l]);
    }
    printf("\n");
    return 0;
}
