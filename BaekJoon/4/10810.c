#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d", &a, &b);
    int arr[a];
    for (int i = 0; i < a; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < b; i++){
        scanf("%d %d %d", &c, &d, &e);
        if (c == d){
            arr[c - 1] = e;
        }
        else{
            for (int j = c - 1; j < d; j++){
                    arr[j] = e;
            }
        }
    }
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}