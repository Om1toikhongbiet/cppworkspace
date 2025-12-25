#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// --- (GIỮ NGUYÊN 4 HÀM CHECK CỦA BẠN Ở ĐÂY) ---
// 1. Tăng chặt
int checktang(char s[]) {
    for (int i = 0; i < 4; i++) 
        if (s[i] >= s[i+1]) return 0;
    return 1;
}
// 2. Bằng nhau
int checkbangnhau(char s[]) {
    for (int i = 0; i < 4; i++) 
        if (s[i] != s[i+1]) return 0;
    return 1;
}
// 3. 3 đầu 2 cuối
int check32(char s[]) {
    if (s[0] != s[1] || s[1] != s[2]) return 0;
    if (s[3] != s[4]) return 0;
    return 1;
}
// 4. Lộc phát
int checklocphat(char s[]) {
    for (int i = 0; i < 5; i++) 
        if (s[i] != '6' && s[i] != '8') return 0;
    return 1;
}

int main () {
    int testcase;
    // SỬA LỖI NHẬP LIỆU:
    scanf("%d", &testcase);
    getchar(); // Quan trọng: Nuốt dấu Enter thừa sau khi nhập số
    
    while(testcase--){ // Viết tắt cho vòng lặp t--
        char s[100]; // Khai báo dư ra cho an toàn
        char bienso[6];
        gets(s); // Nhập chuỗi: "29-T1 123.45"
        
        // SỬA LỖI TÁCH SỐ (An toàn tuyệt đối):
        // Format chuẩn: 012345678901
        // Chuỗi:        29-T1 123.45
        // Ta cần lấy index: 6, 7, 8 (bỏ 9 dấu chấm), 10, 11
        
        bienso[0] = s[6];
        bienso[1] = s[7];
        bienso[2] = s[8];
        bienso[3] = s[10]; // Nhảy qua dấu chấm (index 9)
        bienso[4] = s[11];
        bienso[5] = '\0'; // Khóa chuỗi lại (Rất quan trọng)

        // SỬA LỖI LOGIC IN (Đúng in YES, Sai in NO)
        if (checktang(bienso) || checkbangnhau(bienso) || check32(bienso) || checklocphat(bienso)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}