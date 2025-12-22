#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    if (rows <= cols) {

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (j <= cols - i + 1) {
                printf("%d", i + j - 1);
            } else {
                printf("%d", cols - j + 1);
            }
        }
        printf("\n");
    }
    
}
else{
    for (int i = 1; i <= cols; i++) {
        for (int j = 1; j <= cols; j++) {
            if (j <= cols - i + 1) {
                printf("%d", i + j - 1);
            } else {
                printf("%d", cols - j + 1);
            }
        }
        printf("\n");
    }
     if( rows<=cols){
        return 0;
    }else{
     for (int i = cols+1; i <= rows; i++) {
        printf("%i",i);
        
        for (int j = 2; j <= cols; j++) {
            if (j <= cols - i + 1) {
                printf("%d", i + j - 1);
            } else {
                printf("%d", cols - j + 1);
            }
        }
        printf("\n");
    }}


    return 0;
}
}