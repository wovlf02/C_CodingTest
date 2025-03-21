#include <stdio.h>

int main() {
    char arr[9];
    int i = 0, max = -1, index = 0;
    for(i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
            index = i + 1;
        }
    }
    printf("%d\n%d", max, index);
}