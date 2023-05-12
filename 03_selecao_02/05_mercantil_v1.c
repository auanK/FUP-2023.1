#include <stdio.h>
#include <stdlib.h>

int main() {
    int preco, primeiro_palpite, segundo_palpite;
    scanf("%d%d%d", &preco, &primeiro_palpite, &segundo_palpite);

    if (abs(primeiro_palpite - preco) < abs(segundo_palpite - preco)) {
        printf("primeiro\n");
    } else if (abs(primeiro_palpite - preco) > abs(segundo_palpite - preco)) {
        printf("segundo\n");
    } else {
        printf("empate\n");
    }
}