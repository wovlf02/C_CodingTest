#include <stdio.h>

int main() {
    int a, b, c, d, temp;
    scanf("%d %d", &a, &b);
    int arr[a];
    for (int i = 0; i < a; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < b; i++) {
        scanf("%d %d", &c, &d);
        if(c == d) {
            continue;
        } else {
            temp = arr[c - 1];
            arr[c - 1] = arr[d - 1];
            arr[d - 1] = temp;
        }
    }
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}