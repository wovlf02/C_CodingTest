#include <stdio.h>

int main() {
    int total = 0, sum = 0, n = 0, price = 0, cnt = 0;
    scanf("%d", &total);
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &price, &cnt);
        sum += price * cnt;
    }
    if(total == sum) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}