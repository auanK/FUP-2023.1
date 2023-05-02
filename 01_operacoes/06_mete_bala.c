#include <math.h>
#include <stdio.h>
int main() {
    float xa, ya, xb, yb, dab;

    scanf("%f%f%f%f", &xa, &ya, &xb, &yb);

    dab = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));

    printf("%.2f\n", dab);
}