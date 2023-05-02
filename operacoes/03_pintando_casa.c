#include <math.h>
#include <stdio.h>

int main() {
    float a, b, c, semip, area;

    scanf("%f\n%f\n%f\n", &a, &b, &c);
    semip = (a + b + c) / 2;
    area = sqrt(semip * (semip - a) * (semip - b) * (semip - c));
    printf("%.02f\n", area);
}