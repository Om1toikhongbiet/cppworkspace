#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Hàm đảo ngược chuỗi (cần dùng sau khi cộng xong)
void daoNguoc(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}

// Hàm cộng 2 số lớn dạng chuỗi: a + b = res
void tongSoLon(char a[], char b[], char res[]) {
    int n1 = strlen(a);
    int n2 = strlen(b);
    
    // Đưa con trỏ về cuối 2 chuỗi để cộng từ hàng đơn vị
    int i = n1 - 1, j = n2 - 1;
    int nho = 0, k = 0; // k là chỉ số cho chuỗi kết quả

    // Cộng lần lượt từ phải sang trái
    while (i >= 0 || j >= 0 || nho > 0) {
        int so1 = (i >= 0) ? a[i] - '0' : 0; // Nếu hết số thì coi là 0
        int so2 = (j >= 0) ? b[j] - '0' : 0;
        
        int tong = so1 + so2 + nho;
        
        res[k++] = (tong % 10) + '0'; // Lấy hàng đơn vị
        nho = tong / 10;              // Lấy phần nhớ
        
        i--; j--;
    }
    
    res[k] = '\0'; // Đóng chuỗi kết quả
    daoNguoc(res); // Vì mình cộng và lưu từ cuối lên nên phải đảo ngược lại
}

int main() {
    char s[205];
    scanf("%s", s); // Nhập số ban đầu

    // Lặp đến khi chỉ còn 1 chữ số
    while (strlen(s) > 1) {
        int len = strlen(s);
        int mid = len / 2; // Điểm cắt

        // Tách đôi
        char left[105] = {0};  // Nửa đầu
        char right[105] = {0}; // Nửa sau
        
        // Copy nửa đầu
        strncpy(left, s, mid);
        left[mid] = '\0'; // Nhớ khóa đuôi
        
        // Copy nửa sau (s + mid là địa chỉ bắt đầu của nửa sau)
        strcpy(right, s + mid);

        // Tính tổng và lưu lại vào s
        char ketqua[205] = {0};
        tongSoLon(left, right, ketqua);
        
        // In ra màn hình
        printf("%s\n", ketqua);
        
        // Cập nhật s thành kết quả mới để vòng lặp tiếp tục xử lý
        strcpy(s, ketqua);
    }

    return 0;
}