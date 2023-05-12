#include <stdio.h>

int main() {
    int c, a, v;

    scanf("%d%d", &c, &a);

    if (c > a) {
        v = 1;
    } else {
        v = ((a - c) / c) + 2;
    }

    printf("%d\n", v);
}