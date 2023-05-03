#include <stdio.h>
int main() {
    int x;

    scanf("%d", &x);

    if (x > 0) {
        printf("positivo\n");
    } else if (x < 0) {
        printf("negativo\n");
    } else {
        printf("nulo\n");
    }
}