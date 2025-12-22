#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Khởi tạo mảng 2 chiều (khoi_tao_mang_2_chieu)
void khoi_tao_mang_2_chieu(int mang[][100], int hang, int cot, int gia_tri) {
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            mang[i][j] = gia_tri;
        }
    }
}

// 2. Nhập mảng 2 chiều (nhap_mang_2_chieu)
void nhap_mang_2_chieu(int mang[][100], int hang, int cot) {
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            scanf("%d", &mang[i][j]);
        }
    }
}

// 3. In mảng 2 chiều (in_mang_2_chieu)
void in_mang_2_chieu(int mang[][100], int hang, int cot) {
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
}

// 4. Tìm phần tử lớn nhất (tim_phan_tu_lon_nhat)
int tim_phan_tu_lon_nhat(int mang[][100], int hang, int cot) {
    int max = mang[0][0];
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            if (mang[i][j] > max) max = mang[i][j];
        }
    }
    return max;
}

// 5. Tìm phần tử nhỏ nhất (tim_phan_tu_nho_nhat)
int tim_phan_tu_nho_nhat(int mang[][100], int hang, int cot) {
    int min = mang[0][0];
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            if (mang[i][j] < min) min = mang[i][j];
        }
    }
    return min;
}

// 6. Tính tổng các phần tử (tinh_tong_phan_tu)
long long tinh_tong_phan_tu(int mang[][100], int hang, int cot) {
    long long tong = 0;
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            tong += mang[i][j];
        }
    }
    return tong;
}

// 7. Tìm tổng đường chéo chính (tong_duong_cheo_chinh)
long long tong_duong_cheo_chinh(int mang[][100], int hang, int cot) {
    long long tong = 0;
    for (int i = 0; i < hang && i < cot; ++i) {
        tong += mang[i][i];
    }
    return tong;
}

// 8. Tìm tổng đường chéo phụ (tong_duong_cheo_phu)
long long tong_duong_cheo_phu(int mang[][100], int hang, int cot) {
    long long tong = 0;
    for (int i = 0; i < hang && i < cot; ++i) {
        tong += mang[i][cot - 1 - i];
    }
    return tong;
}

// 9. Ma trận chuyển vị (chuyen_vi_ma_tran)
void chuyen_vi_ma_tran(int mang[][100], int chuyen_vi[][100], int hang, int cot) {
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            chuyen_vi[j][i] = mang[i][j];
        }
    }
}

// 10. Nhân hai ma trận (nhan_hai_ma_tran)
void nhan_hai_ma_tran(int a[][100], int b[][100], int ket_qua[][100], int hang_a, int cot_a, int cot_b) {
    for (int i = 0; i < hang_a; ++i) {
        for (int j = 0; j < cot_b; ++j) {
            ket_qua[i][j] = 0;
            for (int k = 0; k < cot_a; ++k) {
                ket_qua[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// 11. Kiểm tra ma trận đối xứng (kiem_tra_doi_xung)
int kiem_tra_doi_xung(int mang[][100], int hang, int cot) {
    if (hang != cot) return 0;
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            if (mang[i][j] != mang[j][i]) return 0;
        }
    }
    return 1;
}

// 12. Sắp xếp mảng 2 chiều theo hàng (sap_xep_theo_hang)
void sap_xep_theo_hang(int mang[][100], int hang, int cot) {
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot - 1; ++j) {
            for (int k = j + 1; k < cot; ++k) {
                if (mang[i][j] > mang[i][k]) {
                    int tam = mang[i][j];
                    mang[i][j] = mang[i][k];
                    mang[i][k] = tam;
                }
            }
        }
    }
}

// 13. Tìm vị trí phần tử (tim_vi_tri_phan_tu)
void tim_vi_tri_phan_tu(int mang[][100], int hang, int cot, int gia_tri, int *vi_tri_hang, int *vi_tri_cot) {
    *vi_tri_hang = -1;
    *vi_tri_cot = -1;
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            if (mang[i][j] == gia_tri) {
                *vi_tri_hang = i;
                *vi_tri_cot = j;
                return;
            }
        }
    }
}

// 14. Đếm số phần tử chẵn (dem_so_phan_tu_chan)
int dem_so_phan_tu_chan(int mang[][100], int hang, int cot) {
    int dem = 0;
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            if (mang[i][j] % 2 == 0) dem++;
        }
    }
    return dem;
}

// 15. Tìm hàng có tổng lớn nhất (tim_hang_tong_lon_nhat)
int tim_hang_tong_lon_nhat(int mang[][100], int hang, int cot) {
    int max_tong = 0, hang_max = 0;
    for (int i = 0; i < hang; ++i) {
        int tong_hang = 0;
        for (int j = 0; j < cot; ++j) {
            tong_hang += mang[i][j];
        }
        if (tong_hang > max_tong) {
            max_tong = tong_hang;
            hang_max = i;
        }
    }
    return hang_max;
}

// 16. Sao chép mảng 2 chiều (sao_chep_mang_2_chieu)
void sao_chep_mang_2_chieu(int nguon[][100], int dich[][100], int hang, int cot) {
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < cot; ++j) {
            dich[i][j] = nguon[i][j];
        }
    }
}

// Ví dụ sử dụng (ham_chinh để test)
int ham_chinh() {
    int hang, cot;
    scanf("%d %d", &hang, &cot);
    int mang[100][100];
    nhap_mang_2_chieu(mang, hang, cot);
    
    // Test các hàm
    printf("Mảng gốc:\n");
    in_mang_2_chieu(mang, hang, cot);
    
    printf("Phần tử lớn nhất: %d\n", tim_phan_tu_lon_nhat(mang, hang, cot));
    printf("Tổng các phần tử: %lld\n", tinh_tong_phan_tu(mang, hang, cot));
    printf("Tổng đường chéo chính: %lld\n", tong_duong_cheo_chinh(mang, hang, cot));
    
    int chuyen_vi[100][100];
    chuyen_vi_ma_tran(mang, chuyen_vi, hang, cot);
    printf("Ma trận chuyển vị:\n");
    in_mang_2_chieu(chuyen_vi, cot, hang);
    
    printf("Kiểm tra đối xứng: %d\n", kiem_tra_doi_xung(mang, hang, cot));
    
    return 0;
}