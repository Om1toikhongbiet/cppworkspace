#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    fgets(s, sizeof(s), stdin); // Nhập cả dòng

    // Đây là "Sổ Nam Tào" lưu các từ duy nhất
    char ds_tu[100][50]; 
    int n = 0; // Biến đếm xem đã lưu được bao nhiêu từ rồi

    char *token = strtok(s, " \n"); // Cắt nhát đầu tiên

    while (token != NULL) {
        
        // --- BƯỚC KIỂM TRA (Check trùng) ---
        int bi_trung = 0; // Giả sử là không trùng
        
        // Duyệt lại toàn bộ danh sách các từ đã lưu để so sánh
        for (int i = 0; i < n; i++) {
            if (strcmp(ds_tu[i], token) == 0) {
                bi_trung = 1; // Tìm thấy nó đã tồn tại rồi!
                break; // Dừng kiểm tra, không cần duyệt tiếp
            }
        }

        // --- BƯỚC QUYẾT ĐỊNH ---
        // Nếu không bị trùng thì mới Lưu và In
        if (bi_trung == 0) {
            strcpy(ds_tu[n], token); // Copy từ mới vào danh sách
            n++; // Tăng số lượng từ trong danh sách lên
            
            printf("%s ", token); // In ra luôn
        }

        // Cắt từ tiếp theo
        token = strtok(NULL, " \n");
    }

    return 0;
}