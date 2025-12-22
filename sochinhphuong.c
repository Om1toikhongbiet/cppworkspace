#include <stdio.h>
#include <math.h>

int main(void) {
    int cantrai, canphai;
    if (scanf("%d %d", &cantrai, &canphai) != 2) return 0;

    int count = 0;
    // Tìm k bắt đầu: số nguyên nhỏ nhất sao cho k*k >= cantrai
    int start = (int)ceil(sqrt(cantrai));
    // Tìm k kết thúc: số nguyên lớn nhất sao cho k*k <= canphai
    int end = (int)floor(sqrt(canphai));
      for (int i = start; i <= end; ++i) {
        int square = i * i;
        if (square >= cantrai && square <= canphai) {
            count++;
              // in từng số chính phương
        }
    }
    printf("%d\n", count);


    for (int i = start; i <= end; ++i) {
        int square = i * i;
        if (square >= cantrai && square <= canphai) {
            count++;
            printf("%d\n", square);  // in từng số chính phương
        }
    }


}