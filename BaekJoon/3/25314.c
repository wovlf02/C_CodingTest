#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i < n/4; i++) {
        printf("long ");
    }
    printf("int");
    return 0;
}