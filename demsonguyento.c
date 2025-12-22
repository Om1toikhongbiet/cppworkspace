#include <stdio.h>
#include <string.h>

// Hàm kiểm tra ký tự có phải là số nguyên tố không (2, 3, 5, 7)
// Lưu ý: So sánh trực tiếp ký tự '2', '3'...
int laNguyenTo(char c) {
    if (c == '2' || c == '3' || c == '5' || c == '7') {
        return 1; // Là nguyên tố
    }
    return 0; // Không phải
}

int main() {
    // 1. Khai báo chuỗi đủ lớn (hơn 10 ký tự)
    char s[20]; 
    scanf("%s", s); // Nhập thẳng chuỗi, không dùng int

    int len = strlen(s);
    
    // Mảng đánh dấu: daIn[2] = 1 nghĩa là số 2 đã được in rồi
    int daIn[10] = {0}; 

    // 2. Duyệt từng ký tự
    for (int i = 0; i < len; i++) {
        char chuSoHienTai = s[i];
        int giaTriSo = chuSoHienTai - '0'; // Chuyển '2' thành số 2 để làm chỉ số mảng

        // Kiểm tra 2 điều kiện:
        // - Phải là số nguyên tố
        // - Chưa được in ra màn hình lần nào
        if (laNguyenTo(chuSoHienTai) && daIn[giaTriSo] == 0) {
            
            int count = 0;
            // Vòng lặp đếm số lần xuất hiện
            for (int j = 0; j < len; j++) {
                if (s[j] == chuSoHienTai) {
                    count++;
                }
            }
            
            printf("%c %d\n", chuSoHienTai, count);

            // Đánh dấu là đã xử lý xong số này
            daIn[giaTriSo] = 1; 
        }
    }

    return 0;
}