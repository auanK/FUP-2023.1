#include <stdio.h>

int main() {
    int c_1, l_1, c_2, l_2, a_1, a_2;

    scanf("%d%d%d%d", &c_1, &l_1, &c_2, &l_2);

    a_1 = c_1 * l_1;
    a_2 = c_2 * l_2;

    if (a_1 > a_2) {
        printf("%d\n", a_1);
    } else {
        printf("%d\n", a_2);
    }
}