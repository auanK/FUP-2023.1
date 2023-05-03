#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    if (a >= 0) {
        printf("%d\n", a % 360);
    } else {
        a = (a % 360) + 360;

        printf("%d\n", a % 360);
    }
}