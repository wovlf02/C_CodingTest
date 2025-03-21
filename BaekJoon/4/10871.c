#include <stdio.h>

int main() {
    int a, b, input;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++) {
        scanf("%d", &input);
        if(input < b) {
            printf("%d ", input);
        }
    }
    return 0;
}