#include <stdio.h>

int main() {
    float primeiro, valor;
    char segundo;

    scanf("%f %c%f", &primeiro, &segundo, &valor);

    if (primeiro > valor && segundo == 'm' ||
        primeiro < valor && segundo == 'M') {
        printf("segundo\n");
    } else {
        printf("primeiro\n");
    }
}