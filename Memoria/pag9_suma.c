#include <stdio.h>

int main() {
    int arr[4] = {10, 20, 30, 40};
    int sum = 0;
    
    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }
    
    printf("Suma: %d\n", sum);
    return 0;
}
