#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    if (b == 0) {
        
        return 1;
    }

    // Tính và in kết quả theo thứ tự đề bài
    printf("%d\n", a + b);     // tổng
    printf("%d\n", a - b);     // hiệu  
    printf("%d\n", a * b);     // tích
    printf("%d\n", a / b);     // chia nguyên (cắt phần thập phân)
    printf("%d\n", a % b);     // chia dư
    printf("%.2f\n", (float)a / b);  // chia thực (2 chữ số thập phân)

    return 0;
}