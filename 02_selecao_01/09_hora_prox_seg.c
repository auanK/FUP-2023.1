#include <stdio.h>

int main() {
    int h, m, s;

    scanf("%d%d%d", &h, &m, &s);

    if (s == 59) {
        s = 0;
        if (m == 59) {
            m = 0;
            if (h == 23) {
                h = 0;
            } else {
                h++;
            }
        } else {
            m++;
        }
    } else {
        s++;
    }
    printf("%02d %02d %02d\n", h, m, s);
}