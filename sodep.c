#include <stdio.h>
#include <math.h>




int sodep(long long n) {
    long long reverse = 0, temp = n;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return (reverse == n);
}

int main() {
    int n;
    scanf("%i", &n);
    for(int i =1;i<=n;i++){
        long long j;
        scanf ("%lld",&j);
        if (sodep(j)) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

}