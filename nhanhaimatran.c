#include<stdio.h>

int main () {
     int socot3;
    
    int sohang, giua, socot;
   
    
   
    scanf("%d%d%d%d", &sohang, &giua, &socot, &socot3);
     int e[sohang][socot3];
    
    // Khai báo mảng
    int a[sohang][giua], b[giua][socot], c[sohang][socot];
     int d[socot][socot3];

    // 1. Nhập ma trận A
    for ( int i = 0; i < sohang; i++ ) {
        for ( int j = 0; j < giua; j++ ) {
            scanf("%d", &a[i][j]);
        }
    }

    // 2. Nhập ma trận B
    for ( int i = 0; i < giua; i++ ) {
        for ( int j = 0; j < socot; j++ ) {
            scanf("%d", &b[i][j]);
        }
    }
    //3.scan ma trận D
    for ( int i = 0; i < socot; i++ ) {
        for ( int j = 0; j < socot3; j++ ) {
            scanf("%d", &d[i][j]);
        }
    }

    // 3. TÍNH TOÁN (PHẦN QUAN TRỌNG NHẤT)
    // i: Duyệt qua từng dòng của ma trận A (và cũng là dòng của C)
    for (int i = 0; i < sohang; i++) {
        // j: Duyệt qua từng cột của ma trận B (và cũng là cột của C)
        for (int j = 0; j < socot; j++) {
            
            c[i][j] = 0; // Khởi tạo giá trị ô kết quả bằng 0 trước khi cộng dồn
            
            // k: Biến chạy chung (chiều 'giua') để nhân Hàng x Cột
            for (int k = 0; k < giua; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
   
    
    int tong =0;
    for ( int i =0; i < sohang;i++){
        for ( int j=0; j < socot3;j++){
            int tong =0;
            for( int k=0; k< socot;k++){
                
                tong += c[i][k]*d[k][j];
                e[i][j]= tong;

            }
           
        }

    }
    for( int i =0; i < sohang;i++){
        for ( int j=0; j < socot3;j++){
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }

}
    // 4. In kết quả
  

   
