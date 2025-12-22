#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// 1. Kiểm tra số nguyên tố (kiem_tra_nguyen_to) - O(sqrt(so_nguyen))
int kiem_tra_nguyen_to(long long so_nguyen) {
    if (so_nguyen < 2) return 0;
    if (so_nguyen == 2 || so_nguyen == 3) return 1;
    if (so_nguyen % 2 == 0 || so_nguyen % 3 == 0) return 0;
    for (long long i = 5; i * i <= so_nguyen; i += 6) {
        if (so_nguyen % i == 0 || so_nguyen % (i + 2) == 0) return 0;
    }
    return 1;
}

// 2. Tìm ước số của so_nguyen (tim_uoc_so) - O(sqrt(so_nguyen))
void tim_uoc_so(long long so_nguyen, long long uoc_so[], int *so_luong) {
    *so_luong = 0;
    for (long long i = 1; i * i <= so_nguyen; ++i) {
        if (so_nguyen % i == 0) {
            uoc_so[(*so_luong)++] = i;
            if (i != so_nguyen / i) uoc_so[(*so_luong)++] = so_nguyen / i;
        }
    }
}

// 3. Phân tích thừa số nguyên tố (phan_tich_thua_so_nguyen_to) - O(sqrt(so_nguyen))
void phan_tich_thua_so_nguyen_to(long long so_nguyen, long long thua_so[], int mu[], int *so_luong) {
    *so_luong = 0;
    for (long long i = 2; i * i <= so_nguyen; ++i) {
        if (so_nguyen % i == 0) {
            thua_so[*so_luong] = i;
            mu[*so_luong] = 0;
            while (so_nguyen % i == 0) {
                mu[*so_luong]++;
                so_nguyen /= i;
            }
            (*so_luong)++;
        }
    }
    if (so_nguyen > 1) {
        thua_so[*so_luong] = so_nguyen;
        mu[*so_luong] = 1;
        (*so_luong)++;
    }
}

// 4. Tìm GCD (uoc_chung_lon_nhat) - O(log min(so_a, so_b))
long long uoc_chung_lon_nhat(long long so_a, long long so_b) {
    while (so_b != 0) {
        long long tam = so_b;
        so_b = so_a % so_b;
        so_a = tam;
    }
    return so_a;
}

// 5. Tìm LCM (boi_chung_nho_nhat) - O(log min(so_a, so_b))
long long boi_chung_nho_nhat(long long so_a, long long so_b) {
    return so_a / uoc_chung_lon_nhat(so_a, so_b) * so_b;
}

// 6. Sàng Eratosthenes để tìm tất cả số nguyên tố đến so_nguyen (sang_eratosthenes) - O(so_nguyen log log so_nguyen)
void sang_eratosthenes(int so_nguyen, int so_nguyen_to[], int *so_luong) {
    int la_nguyen_to[so_nguyen + 1];
    memset(la_nguyen_to, 1, sizeof(la_nguyen_to));
    la_nguyen_to[0] = la_nguyen_to[1] = 0;
    *so_luong = 0;
    for (int i = 2; i <= so_nguyen; ++i) {
        if (la_nguyen_to[i]) {
            so_nguyen_to[(*so_luong)++] = i;
            for (int j = i * 2; j <= so_nguyen; j += i) {
                la_nguyen_to[j] = 0;
            }
        }
    }
}

// 7. Tìm số nguyên tố nhỏ nhất lớn hơn so_nguyen (so_nguyen_to_tiep_theo) - O(so_nguyen log log so_nguyen) worst case
long long so_nguyen_to_tiep_theo(long long so_nguyen) {
    if (so_nguyen < 2) return 2;
    long long ung_vien = so_nguyen + 1;
    while (!kiem_tra_nguyen_to(ung_vien)) ung_vien++;
    return ung_vien;
}

// 8. Kiểm tra số hoàn hảo (kiem_tra_hoan_hao) - O(sqrt(so_nguyen))
int kiem_tra_hoan_hao(long long so_nguyen) {
    if (so_nguyen < 6) return 0;
    long long tong = 1;
    for (long long i = 2; i * i <= so_nguyen; ++i) {
        if (so_nguyen % i == 0) {
            tong += i;
            if (i != so_nguyen / i) tong += so_nguyen / i;
        }
    }
    return tong == so_nguyen;
}

// 9. Tính số Fibonacci thứ so_nguyen (fibonacci) - O(log so_nguyen) với matrix exponentiation
long long fibonacci(long long so_nguyen) {
    if (so_nguyen == 0) return 0;
    if (so_nguyen == 1) return 1;
    long long a = 0, b = 1;
    for (long long i = 2; i <= so_nguyen; ++i) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// 10. Kiểm tra số Armstrong (kiem_tra_armstrong)
int kiem_tra_armstrong(int so_nguyen) {
    int goc = so_nguyen, tong = 0, so_chu_so = 0;
    int tam = so_nguyen;
    while (tam) {
        so_chu_so++;
        tam /= 10;
    }
    tam = so_nguyen;
    while (tam) {
        int chu_so = tam % 10;
        tong += pow(chu_so, so_chu_so);
        tam /= 10;
    }
    return tong == goc;
}

// 11. Tìm số đảo ngược (so_dao_nguoc)
long long so_dao_nguoc(long long so_nguyen) {
    long long dao = 0;
    while (so_nguyen) {
        dao = dao * 10 + so_nguyen % 10;
        so_nguyen /= 10;
    }
    return dao;
}

// 12. Tính tổng chữ số (tong_chu_so)
int tong_chu_so(long long so_nguyen) {
    int tong = 0;
    while (so_nguyen) {
        tong += so_nguyen % 10;
        so_nguyen /= 10;
    }
    return tong;
}

// 13. Tính tích chữ số (tich_chu_so)
long long tich_chu_so(long long so_nguyen) {
    if (so_nguyen == 0) return 0;
    long long tich = 1;
    while (so_nguyen) {
        tich *= so_nguyen % 10;
        so_nguyen /= 10;
    }
    return tich;
}

// 14. Kiểm tra số palindrome (kiem_tra_palindrome)
int kiem_tra_palindrome(long long so_nguyen) {
    return so_nguyen == so_dao_nguoc(so_nguyen);
}

// 15. Tính lũy thừa modulo (luy_thua_modulo) - O(log so_mu)
long long luy_thua_modulo(long long co_so, long long so_mu, long long modulo) {
    long long ket_qua = 1;
    co_so %= modulo;
    while (so_mu > 0) {
        if (so_mu & 1) ket_qua = (ket_qua * co_so) % modulo;
        co_so = (co_so * co_so) % modulo;
        so_mu >>= 1;
    }
    return ket_qua;
}

// 16. Tìm nghịch đảo modulo (nghich_dao_modulo) - dùng Extended Euclid
long long nghich_dao_modulo(long long so_a, long long modulo) {
    long long m = modulo, x = 0, y = 1;
    if (m == 1) return 0;
    long long modulo_goc = m;
    while (so_a > 1) {
        long long thuong = so_a / m;
        long long tam = m;
        m = so_a % m;
        so_a = tam;
        tam = x;
        x = y - thuong * x;
        y = tam;
    }
    if (y < 0) y += modulo_goc;
    return y;
}

// Ví dụ sử dụng (ham_chinh để test)
int ham_chinh() {
    // Test tích chữ số
    long long so_nguyen;
    scanf("%lld", &so_nguyen);
    printf("Tích chữ số: %lld\n", tich_chu_so(so_nguyen));
    
    // Test các hàm khác
    printf("Kiểm tra nguyên tố 7: %d\n", kiem_tra_nguyen_to(7));
    printf("Ước chung lớn nhất(12,18): %lld\n", uoc_chung_lon_nhat(12, 18));
    printf("Fibonacci(10): %lld\n", fibonacci(10));
    printf("Số đảo ngược 123: %lld\n", so_dao_nguoc(123));
    printf("Tổng chữ số 123: %d\n", tong_chu_so(123));
    printf("Kiểm tra palindrome 121: %d\n", kiem_tra_palindrome(121));
    printf("Lũy thừa modulo 2^10 mod 1000: %lld\n", luy_thua_modulo(2, 10, 1000));
    printf("Nghịch đảo modulo 3 mod 11: %lld\n", nghich_dao_modulo(3, 11));
    
    return 0;
}