#include <stdio.h>

int main() {
    int n, x, y, s;
    char c;

    scanf("%d%d%d %c%d", &n, &x, &y, &c, &s);

    switch (c) {
        case 'U':
            y = (y - s) % n;
            if (y <= 0) y += n;
            break;
        case 'D':
            y = (y + s) % n;
            break;
        case 'R':
            x = (x + s) % n;
            break;
        case 'L':
            x = (x - s) % n;
            if (x <= 0) x += n;
            break;
    }
    printf("%d %d\n", x, y);
}