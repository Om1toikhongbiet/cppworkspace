#include <stdio.h>
#include <math.h>

// 1. Khai báo mảng sàng nguyên tố
// Giới hạn căn bậc 2 của 10^12 là 10^6. Ta khai báo dư ra một chút.
#define MAX 1000005 
int prime[MAX]; 

// Hàm Sàng Eratosthenes (Đã học ở bài trước)
void sangNguyenTo() {
    // Khởi tạo tất cả là nguyên tố (1)
    for (int i = 0; i < MAX; i++) {
        prime[i] = 1;
    }
    // 0 và 1 không phải nguyên tố
    prime[0] = prime[1] = 0;
    
    // Thuật toán sàng
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (prime[i] == 1) {
            for (int j = i * i; j < MAX; j += i) {
                prime[j] = 0; // Đánh dấu hợp số
            }
        }
    }
}

int main() {
    // Bước chuẩn bị: Sàng nguyên tố trước khi nhập bất cứ gì
    sangNguyenTo();

    int t;
    scanf("%d", &t);
    
    while (t--) { // Cách viết gọn của while(t > 0) { ... t--; }
        long long L, R;
        scanf("%lld %lld", &L, &R); // Nhớ dùng %lld cho số lớn 10^12

        // Tính khoảng căn bậc 2
        // Ví dụ L=1, R=10 -> Cần tìm nguyên tố trong [sqrt(1), sqrt(10)] -> [1, 3]
        long long start = sqrt(L);
        long long end = sqrt(R);

        // Xử lý làm tròn: 
        // Nếu start*start < L thì phải tăng start lên 1 đơn vị
        // Ví dụ L=5, sqrt(5)=2. Mà 2^2=4 < 5 (nằm ngoài khoảng). Nên phải xét từ 3.
        if (start * start < L) {
            start++;
        }

        int count = 0;
        // Duyệt từ start đến end và đếm số nguyên tố
        // Vì start, end <= 10^6 nên vòng lặp này chạy cực nhanh
        for (int i = start; i <= end; i++) {
            if (prime[i] == 1) {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    return 0;
}