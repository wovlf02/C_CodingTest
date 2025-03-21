#include <stdio.h>

int main() {
    int a = 0, v = 0, cnt = 0;
    scanf("%d", &a);
    char arr[a];
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for(int i = 0; i < a; i++) {
        if(arr[i] == v) {
            cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}