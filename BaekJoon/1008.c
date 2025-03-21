#include <stdio.h>

int main() {
    int a = 0, b = 0;
    double c;
    scanf("%d %d", &a, &b);
    c = (double)a / b;
    printf("%.9lf", c);
    return 0;
}