

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
void giai_quyet() {
    char xau[100005];
    scanf("%s", xau);
    
    int do_dai = strlen(xau);
    int la_thang_bang = 1; 
    for (int i = 1; i < do_dai; i++) {
       
        int khoang_cach_xuoi = abs(xau[i] - xau[i-1]);
        
       
        int khoang_cach_nguoc = abs(xau[do_dai - 1 - i] - xau[do_dai - i]);

        
        if (khoang_cach_xuoi != khoang_cach_nguoc) {
            la_thang_bang = 0; 
            break;            
        }
    }

    if (la_thang_bang == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int so_bo_test;

    if (scanf("%d", &so_bo_test) > 0) {
        while (so_bo_test > 0) {
            giai_quyet();
            so_bo_test--;
        }
    }
    return 0;
}
