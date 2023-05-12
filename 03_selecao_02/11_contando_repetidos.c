#include <stdio.h>

int main() {
    int n1, n2, n3, iguais;
    scanf("%d%d%d", &n1, &n2, &n3);

    iguais = 0;

    if (n1 == n2) iguais = 2;
    if (n1 == n3) iguais = 2;
    if (n2 == n3) iguais = 2;
    if (n1 == n2 && n2 == n3) iguais = 3;

    printf("%d\n", iguais);
}