#include <stdio.h>

int main() {
    int h = 0, m = 0;
    int time = 0;
    scanf("%d %d", &h, &m);
    scanf("%d", &time);

    if(m + time < 60) {
        printf("%d %d\n", h, m + time);
    } else {
        if(h + ((m + time) / 60) < 24) {
            printf("%d %d", h + ((m + time) / 60), (m + time) % 60);
        } else {
            h = (h + ((m + time) / 60)) % 24;
            printf("%d %d", h, (m + time) % 60);
        }
    }
    return 0;
}