#include <stdio.h>

int main() {
    int p, d_1, d_2;

    scanf("%d%d%d", &p, &d_1, &d_2);

    if (p == 0 && (d_1 + d_2) % 2 == 0) {
        printf("0\n");
    } else if (p == 1 && (d_1 + d_2) % 2 != 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }
}