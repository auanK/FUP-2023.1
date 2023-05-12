#include <stdio.h>

int main() {
    char s;
    int f, p;

    scanf("%c%d", &s, &f);

    if (s == 'b') {
        p = ((f * 20) - 80) / 10;
    } else {
        p = ((f * 18) - 80) / 10;
    }
    if (p < 150) {
        printf("Fraco, nem passou\n");
    } else if (p < 180) {
        printf("Perfeito\n");
    } else if (p < 210) {
        printf("Satisfeito\n");
    } else if (p > 210) {
        printf("Muito forte, bola fora\n");
    }
}