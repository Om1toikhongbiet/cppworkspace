#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
     long long tong = 0;
    
    for(int f = 1; f <= testcase; f++){
        int n;
        // Nên dùng long long để tránh tràn số khi nhân
        scanf("%d", &n);
        
        // 1. Chạy vòng lặp tìm ước
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                // Nếu i là ước nguyên tố, nhân nó vào tổng 1 lần duy nhất
                
                
                // Chia triệt để n cho i (để loại bỏ các thừa số i trùng lặp)
                while (n % i == 0) {
                    tong +=i;
                    n = n / i;
                }
            }
        }
        
        // 2. Xử lý số nguyên tố cuối cùng (Đưa ra khỏi vòng for)
        if (n > 1) {
            tong += n;
        }

       
    }
    printf ("%lld\n", tong);
    return 0;
}