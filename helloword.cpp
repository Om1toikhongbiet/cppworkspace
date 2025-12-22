#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Nhap so can tinh tong cac chu so: ";
    cin >> n;
    
    // Đảm bảo số dương để xử lý
    n = abs(n);
    
    // Tách và tính tổng từng chữ số
    while(n > 0) {
        sum += n % 10;  // Lấy chữ số cuối cùng
        n /= 10;       // Bỏ chữ số cuối
    }
    
    cout << "Tong cac chu so la: " << sum << endl;
    
    return 0;
}