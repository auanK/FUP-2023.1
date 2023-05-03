#include <stdio.h>
int main() {
    int a, b;
    float divi;

    scanf("%d", &a);
    scanf("%d", &b);

    divi = (float)a / b;

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%.2f\n", divi);
    printf("%d\n", a % b);
}