#include <stdio.h>

int main() {
    float s;

    scanf("%f", &s);
    if (s <= 1000.00) {
        printf("%.2f\n", s + (s * 0.2));
    } else if (s <= 1500.00) {
        printf("%.2f\n", s + (s * 0.15));
    } else if (s <= 2000.00) {
        printf("%.2f\n", s + (s * 0.1));
    } else if (s > 2000.00) {
        printf("%.2f\n", s + (s * 0.05));
    }
}