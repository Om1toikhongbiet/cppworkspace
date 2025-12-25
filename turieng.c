#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Hàm so sánh để dùng cho qsort (Sắp xếp A-Z)
// Nếu bạn chưa quen qsort, tí mình giải thích cách dùng Bubble Sort bên dưới
int compare(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char s1[1000], s2[1000];
    char ds1[100][50], ds2[100][50];
    int n1 = 0, n2 = 0;

    // --- BƯỚC 1: NHẬP VÀ XỬ LÝ S1 ---
    gets(s1);
    char *token = strtok(s1, " ");
    while (token != NULL) {
        // Kiểm tra xem từ này đã có trong ds1 chưa (để lọc trùng ngay từ đầu)
        int da_co = 0;
        for (int i = 0; i < n1; i++) {
            if (strcmp(ds1[i], token) == 0) {
                da_co = 1;
                break;
            }
        }
        // Nếu chưa có thì mới thêm vào
        if (!da_co) {
            strcpy(ds1[n1], token);
            n1++;
        }
        token = strtok(NULL, " ");
    }

    // Sắp xếp ds1 theo thứ tự từ điển (Bắt buộc theo đề)
    // Dùng qsort cho nhanh, hoặc bạn viết Bubble Sort mảng 2 chiều cũng được
    qsort(ds1, n1, 50, compare);


    // --- BƯỚC 2: NHẬP VÀ XỬ LÝ S2 ---
    gets(s2);
    token = strtok(s2, " ");
    while (token != NULL) {
        // Với S2, ta cứ lưu hết vào, không cần lọc trùng cũng được (hoặc lọc cho gọn cũng tốt)
        strcpy(ds2[n2], token);
        n2++;
        token = strtok(NULL, " ");
    }


    // --- BƯỚC 3: SO SÁNH VÀ IN ---
    for (int i = 0; i < n1; i++) {
        // Cầm từ thứ i của S1 đi soi vào S2
        int tim_thay_trong_s2 = 0;
        for (int j = 0; j < n2; j++) {
            if (strcmp(ds1[i], ds2[j]) == 0) {
                tim_thay_trong_s2 = 1;
                break; // Thấy rồi thì thôi, không tìm nữa
            }
        }

        // Nếu lục tung S2 mà không thấy -> Đây là từ riêng -> IN RA
        if (!tim_thay_trong_s2) {
            printf("%s ", ds1[i]);
        }
    }

    return 0;
}