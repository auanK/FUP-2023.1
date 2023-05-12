#include <stdio.h>

int main() {
    float nota1, nota2, nota_final, media, media_final;
    scanf("%f%f", &nota1, &nota2);
    media = (nota1 + nota2) / 2;

    if (media >= 7) {
        printf("aprovado\n");
    } else if (media <= 4) {
        printf("reprovado\n");
    } else if (media < 7) {
        scanf("%f", &nota_final);
        media_final = (media + nota_final) / 2;
        if (media_final >= 5) {
            printf("aprovado na final\n");
        } else {
            printf("reprovado na final\n");
        }
    }
}