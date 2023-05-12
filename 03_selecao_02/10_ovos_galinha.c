#include <stdio.h>

int main() {
    int n1, n2, n3, n4, maior_valor;

    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    maior_valor = n1;
    if (n2 > maior_valor) maior_valor = n2;
    if (n3 > maior_valor) maior_valor = n3;
    if (n4 > maior_valor) maior_valor = n4;

    printf("%d\n", maior_valor);
}