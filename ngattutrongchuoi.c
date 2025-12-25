#include <stdio.h>
#include <string.h>

int main() {
    char s[1000]; // Chuỗi to để nhập
    gets(s);      // Nhập cả dòng

    char sonamtao[100][50]; // Mảng 2 chiều lưu danh sách từ
    int freq[100] = {0};    // Mảng lưu số lần xuất hiện
    int n = 0;              // Số lượng từ độc nhất đã tìm thấy

    char *token = strtok(s, " ");

    while (token != NULL) {
        // --- BƯỚC 1: KIỂM TRA XEM TỪ CÓ CHƯA ---
        int vi_tri_tim_thay = -1; // -1 nghĩa là chưa thấy
        
        for (int i = 0; i < n; i++) {
            if (strcmp(sonamtao[i], token) == 0) {
                vi_tri_tim_thay = i;
                break;
            }
        }

        // --- BƯỚC 2: QUYẾT ĐỊNH ---
        if (vi_tri_tim_thay != -1) {
            // Trường hợp A: Đã có rồi -> Tăng biến đếm
            freq[vi_tri_tim_thay]++;
        } else {
            // Trường hợp B: Chưa có -> Thêm mới vào sổ
            strcpy(sonamtao[n], token); // Dùng strcpy để copy
            freq[n] = 1;                // Lần đầu xuất hiện
            n++;                        // Tăng tổng số lượng từ lên
        }

        token = strtok(NULL, " ");
    }

    // In kết quả
    for (int i = 0; i < n; i++) {
        printf("%s: %d\n", sonamtao[i], freq[i]);
    }

    return 0;
}