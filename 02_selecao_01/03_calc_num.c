#include <stdio.h>

int main() {
    int n1, n2, res;
    char op;

    scanf("%d%d %c", &n1, &n2, &op);

    switch (op) {
        case '+':
            res = n1 + n2;

            break;
        case '-':
            res = n1 - n2;
            break;

        case '*':
            res = n1 * n2;
            break;

        case '/':
            res = n1 / n2;
            break;
    }
    printf("%d\n", res);
}