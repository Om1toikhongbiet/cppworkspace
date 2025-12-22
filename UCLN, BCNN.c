#include <stdio.h>
#include <math.h>

int songuyento(long long num) {
    if (num < 2) return 0;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int sodep(long long n) {
    long long reverse = 0, temp = n;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return (reverse == n);
}

int main() {
    int testcase;
    scanf("%d", &testcase);
    
    for (int i = 1; i <= testcase; i++) {
        int cantrai, canphai;
        scanf("%d%d", &cantrai, &canphai); // Nên dùng %d thay vì %i
        
        int count = 0; // Reset biến đếm cho mỗi test case mới

        for (int a = cantrai; a <= canphai; a++) {
            // ĐÃ XÓA đoạn if(a <= 100) vì nó làm sai kết quả (bỏ qua số 11)

            if (songuyento(a) && sodep(a)) {
                printf("%d ", a);
                count++;
                
                if (count == 10) {
                    printf("\n"); // Chỉ xuống dòng đơn, không dùng \n\n
                    count = 0;
                }
            }
        }
        // Xuống dòng kết thúc test case hiện tại
        printf("\n"); 
    }
    return 0;
}