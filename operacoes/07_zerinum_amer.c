#include <stdio.h>

int main() {
    int jog1, jog2, jog3, jog4, soma, res;
    scanf("%d%d%d%d", &jog1, &jog2, &jog3, &jog4);
    soma = jog1 + jog2 + jog3 + jog4;
    res = soma % 4;

    if (soma == 0) {
        printf("nenhum\n");
    } else if (res == 0) {
        printf("jog4\n");
    } else if (res == 1) {
        printf("jog1\n");
    } else if (res == 2) {
        printf("jog2\n");
    } else if (res == 3) {
        printf("jog3\n");
    }
}
