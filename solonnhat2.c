#include <stdio.h>

int main() {
    int testcase;
    scanf("%i",&testcase);
    for( int l =1; l<=testcase;l++){
        
    
    int sophantu;
    // Sửa 1: Thêm dấu & để nhập số phần tử
    scanf("%d", &sophantu);
    
    // Khai báo mảng vừa đủ (không cần +1 nếu xử lý khéo)
    int a[sophantu];
    int b[sophantu];

    for (int f = 0; f < sophantu; f++) {
        // Sửa 2: Thêm dấu & để nhập giá trị
        scanf("%d", &a[f]);
        // Sửa 3: Gán giá trị từ a sang b (lưu bản sao)
        // Code cũ của bạn a[f]=b[f] là lấy rác từ b đổ vào a
        b[f] = a[f];
    }

    // --- THUẬT TOÁN CỦA BẠN: Đẩy số lớn nhất về cuối ---
    // Sửa 4: Chạy đến < sophantu - 1
    // Lý do: Bên trong bạn so sánh a[f] và a[f+1]. 
    // Nếu f chạy đến sophantu-1 thì f+1 sẽ bị tràn ra ngoài mảng.
    for (int f = 0; f < sophantu - 1; f++) {
        int temp;
        // Nếu số trước lớn hơn số sau thì đổi chỗ
        if (a[f] > a[f+1]) { 
            temp = a[f];
            a[f] = a[f+1];
            a[f+1] = temp;
        } 
        // else continue; (Không cần thiết viết dòng này)
    }
    // Sau vòng lặp trên, số lớn nhất chắc chắn nằm ở vị trí cuối cùng: a[sophantu-1]

    // In ra giá trị lớn nhất
    printf("%d\n", a[sophantu-1]);

    // --- TÌM VỊ TRÍ TRONG MẢNG GỐC ---
    // Sửa 5: Sửa cú pháp vòng lặp (dấu phẩy thành dấu <)
    for (int f = 0; f < sophantu; f++) {
        // Sửa 6: So sánh GIÁ TRỊ max với mảng b
        // Code cũ: a[a[sophantu-1]] là lấy giá trị làm index (sai nghiêm trọng)
        if (a[sophantu-1] == b[f]) {
            printf("%d ", f);
        }
    }
    
    return 0;
}}