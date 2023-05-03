#include <stdio.h>

int main() {
    int s;

    scanf("%d", &s);

    char l = (s - 1) % 26 + 'a';

    if (s) {
        printf("%c\n", l);
    } else {
        printf("joguem de novo\n");
    }
}