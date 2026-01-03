#include<stdio.h>
// #include<math.h> // Không cần thư viện này cho bài này

int main (){
    int n; // Đổi tên biến testcase thành n cho đúng đề bài (N bước)
    int a, b;
    
    // Khởi tạo min thật lớn
    long long amin = 1000000000; 
    long long bmin = 1000000000;
    
    scanf("%d", &n); // Dùng %d chuẩn hơn %i
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        
        // Cập nhật min
        if(amin > a){
            amin = a;
        }
        if(bmin > b){
            bmin = b;
        }
    } // <-- Đóng vòng lặp for tại đây!
    
    // In kết quả SAU KHI vòng lặp kết thúc
    // Dùng %lld cho long long
    printf("%lld", amin * bmin);
    
    return 0;
}