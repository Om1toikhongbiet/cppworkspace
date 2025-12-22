#include <stdio.h>

struct SoPhuc {
    int thuc;
    int ao;
};

struct SoPhuc binh_phuong_tong(struct SoPhuc A, struct SoPhuc B) {
    struct SoPhuc tong;
    tong.thuc = A.thuc + B.thuc;
    tong.ao = A.ao + B.ao;
    
    struct SoPhuc ketqua;
    ketqua.thuc = (tong.thuc * tong.thuc) + (tong.ao * tong.ao); 
    ketqua.ao = 2 * tong.thuc * tong.ao;
    
    return ketqua;
}

void hien_thi(struct SoPhuc C) {
    printf("%d + %di\n", C.thuc, C.ao);
}

int main() {
    int t;
    if (scanf("%d", &t) > 0) {
        while (t--) {
            struct SoPhuc A, B, C;
            scanf("%d%d%d%d", &A.thuc, &A.ao, &B.thuc, &B.ao);
            
            C = binh_phuong_tong(A, B);
            hien_thi(C);
        }
    }
    return 0;
}
