#include <stdio.h>
#include <string.h>

// Hàm kiểm tra 2 dấu có khớp nhau không
int khop(char mo, char dong) {
    if (mo == '(' && dong == ')') return 1;
    if (mo == '[' && dong == ']') return 1;
    if (mo == '{' && dong == '}') return 1;
    return 0;
}

int kiem_tra(char s[]) {
    char stack[1000];
    int top = -1; // Stack rỗng thì top = -1

    for (int i = 0; i < strlen(s); i++) {
        char c = s[i];

        // 1. Xử lý dấu nháy ( ' và " )
        if (c == '\'' || c == '\"') {
            // Nếu đỉnh stack trùng với nó -> Là dấu đóng -> Pop
            if (top >= 0 && stack[top] == c) {
                top--; 
            } else {
                // Ngược lại -> Là dấu mở -> Push
                top++;
                stack[top] = c;
            }
        }
        // 2. Xử lý dấu mở thường -> Push
        else if (c == '(' || c == '[' || c == '{') {
            top++;
            stack[top] = c;
        }
        // 3. Xử lý dấu đóng thường -> Check
        else if (c == ')' || c == ']' || c == '}') {
            // Nếu stack rỗng -> Lỗi (dư dấu đóng)
            if (top == -1) return 0;
            
            // Lấy đỉnh stack ra soi
            char dinh = stack[top];
            if (khop(dinh, c)) {
                top--; // Khớp thì xóa đỉnh đi
            } else {
                return 0; // Lệch pha (ví dụ ( đi với ]) -> Lỗi
            }
        }
    }

    // Nếu stack rỗng -> Tất cả đã có đôi có cặp -> Đúng
    if (top == -1) return 1;
    else return 0;
}

int main() {
    char s[1000];
    // Dùng scanf %s nếu chuỗi không có khoảng trắng
    // Nếu đề cho phép nhập dấu cách (ví dụ trong ngoặc kép) thì dùng fgets
    scanf("%s", s); 

    printf("%d", kiem_tra(s));

    return 0;
}