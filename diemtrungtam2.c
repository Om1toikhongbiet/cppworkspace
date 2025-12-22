#include <stdio.h>

// Khai báo mảng đếm toàn cục (để tránh tràn bộ nhớ stack)
// N <= 10^5 nên ta khai báo dư ra chút
int dem[100005] = {0}; 

int main() {
    int n;
    scanf("%d", &n); // Nhập số lượng điểm N

    // Đề bài cho N-1 dòng tiếp theo là các đoạn thẳng
    for (int i = 1; i < n; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        
        // Tăng số lần xuất hiện của 2 đầu mút
        dem[u]++;
        dem[v]++;
    }

    // Kiểm tra xem có điểm nào là trung tâm không
    // Điểm trung tâm phải nối với tất cả (n-1) điểm còn lại
    // -> Nó phải xuất hiện (n-1) lần
    for (int i = 1; i <= n; i++) {
        if (dem[i] == n - 1) {
            printf("Yes");
            return 0; // Tìm thấy thì in Yes và kết thúc luôn
        }
    }

    // Nếu chạy hết vòng lặp mà không tìm thấy ai đủ n-1 lần
    printf("No");
    return 0;
}