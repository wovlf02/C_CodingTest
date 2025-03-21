#include <stdio.h>

int main() {
    int arr[30], num = 0;
    for (int i = 0; i < 30; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < 28; i++){
        scanf("%d", &num);
        arr[num] = 1;
    }
    for (int i = 0; i < 30; i++) {
        if(arr[i] == 1) {
            printf("%d\n", i + 1);
        } else {
            continue;
        }
    }
    return 0;
}