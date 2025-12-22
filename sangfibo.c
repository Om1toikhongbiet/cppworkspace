#include <stdio.h>

// Khai báo mảng toàn cục để lưu dãy Fibo
// Fibonacci thứ 92 là số lớn nhất mà kiểu long long chứa được.
// Khai báo 93 phần tử để có chỉ số a[92]
long long a[93]; 

// Hàm này chỉ cần chạy 1 lần duy nhất
void khoiTaoFibo() {
    a[0] = 0;
    a[1] = 1;
    // Tính trước toàn bộ dãy số từ 2 đến 92
    for (int i = 2; i <= 92; i++) {
        a[i] = a[i-1] + a[i-2];
    }
}

int main() {
    // 1. Bước chuẩn bị: Tính toán trước khi nhập testcase
    khoiTaoFibo(); 

    int testcase;
    // SỬA LỖI 1: Thêm dấu & vào scanf
    scanf("%d", &testcase); 

    while (testcase > 0) {
        int n;
        // SỬA LỖI 2: Thêm dấu & vào scanf
        scanf("%d", &n); 
        
        // Vì đã tính sẵn ở trên, giờ chỉ việc in ra
        printf("%lld\n", a[n]);
        
        testcase--;
    }
    return 0;
}