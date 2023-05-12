#include <stdio.h>

int main() {
    int a, b, c, h, l, x, y;

    scanf("%d%d%d%d%d", &a, &b, &c, &h, &l);

    if (a > b && a > c) {
        x = b;
        y = c;
    } else if (b > a && b > c) {
        x = a;
        y = c;
    } else {
        x = a;
        y = b;
    }

    if (h >= x && l >= y || h >= y && l >= x) {
        printf("S\n");
    } else {
        printf("N\n");
    }
}