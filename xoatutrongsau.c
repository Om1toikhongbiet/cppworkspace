#include <stdio.h>
#include <string.h>

int main() {
    char s1[105];
    char s2[50];

    // 1. Nhập xâu S1 (Có dấu cách nên dùng fgets)
    fgets(s1, sizeof(s1), stdin);
    
    // Lưu ý: s1 lúc này có thể dính phím Enter (\n) ở cuối.
    // Nhưng strtok sẽ xử lý giúp ta việc này, xem ở dưới.

    // 2. Nhập từ S2 (Từ đơn nên dùng scanf cho lành)
    scanf("%s", s2);

    // 3. Cắt chuỗi S1
    // Quan trọng: Delimiter là " \n" (Dấu cách VÀ Xuống dòng)
    // Để nó cắt luôn cả cái Enter cuối dòng nếu có.
    char *token = strtok(s1, " \n");

    while (token != NULL) {
        // 4. So sánh: Nếu token KHÁC s2 thì mới in
        if (strcmp(token, s2) != 0) {
            printf("%s ", token);
        }
        
        // Cắt từ tiếp theo
        token = strtok(NULL, " \n");
    }

    return 0;
}