
#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
   
    int arr2[10000];
    int arr[n];
    for (int i= 0; i<n;i++){
        scanf ("%i",&arr[i]);

    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        int freq = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) freq++;
        }
        if (freq == 1){ count++;
            arr[i]= arr2[i];

        }
    }
    printf("%d\n", count);
    
    return 0;
}
