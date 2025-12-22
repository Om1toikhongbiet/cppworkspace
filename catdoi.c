#include <stdio.h>
#include <string.h>

void solve() {
    char s[25]; // Khai báo mảng ký tự đủ chứa 18 số (dư ra chút cho an toàn)
    scanf("%s", s);

    int len = strlen(s);

    // BƯỚC 1: Biến đổi các chữ số
    for (int i = 0; i < len; i++) {
        if (s[i] == '0' || s[i] == '1') {
            // Giữ nguyên, không làm gì cả
        } 
        else if (s[i] == '8' || s[i] == '9') {
            s[i] = '0'; // Biến thành số 0
        } 
        else {
            // Trường hợp gặp 2, 3, 4, 5, 6, 7 -> Hỏng luôn
            printf("INVALID\n");
            return; // Kết thúc hàm solve ngay lập tức
        }
    }

    // BƯỚC 2: Xử lý in kết quả (Bỏ số 0 ở đầu)
    
    int firstNonZero = -1; // Vị trí số khác 0 đầu tiên
    
    // Tìm vị trí đầu tiên khác '0'
    for (int i = 0; i < len; i++) {
        if (s[i] != '0') {
            firstNonZero = i;
            break; // Tìm thấy rồi thì dừng tìm
        }
    }

    // Nếu không tìm thấy số nào khác 0 (tức là toàn số 0)
    if (firstNonZero == -1) {
        printf("INVALID\n");
    } else {
        // In từ vị trí khác 0 đó đến hết chuỗi
        for (int i = firstNonZero; i < len; i++) {
            printf("%c", s[i]);
        }
        printf("\n"); // Xuống dòng
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}