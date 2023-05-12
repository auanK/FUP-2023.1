#include <stdio.h>

int main() {
    char a, b, c, d;
    int p = 0;

    scanf("%c %c %c %c", &a, &b, &c, &d);
    if (a == 'd') p++;
    if (b == 'a') p++;
    if (c == 'c') p++;
    if (d == 'd') p++;

    switch (p) {
        case 0:
            printf("Nunca assistiu\n");
            break;
        case 1:
            printf("Ja ouviu falar\n");
            break;
        case 2:
            printf("Interessado no assunto\n");
            break;
        case 3:
            printf("Fa\n");
            break;
        case 4:
            printf("Super Fa\n");
            break;
    }
}