#include <stdio.h>

void solve() {
    long long n;

    scanf("%lld", &n);

    int count = 0;
    long long k;
    
    for (k = 2; ; ++k) {
    
        long long tongday = k * (k - 1) / 2;
        
       
        long long phanconlai = n - tongday;

     
        if (phanconlai <= 0) {
            break;
        }

        
        if (phanconlai % k == 0) {
            count++;
        }
    }
    
    // In kết quả
    printf("%d\n", count);
}

int main() {
    int t;
    
    if (scanf("%d", &t) > 0) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
