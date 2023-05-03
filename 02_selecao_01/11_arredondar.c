#include <math.h>
#include <stdio.h>

int main() {
    char o;
    float num;
    int r, f, c;
    scanf("%c %f", &o, &num);
    switch (o) {
        case 'r':
            r = round(num);
            printf("%d\n", r);
            break;
        case 'f':
            r = floor(num);
            printf("%d\n", r);
            break;
        case 'c':
            r = ceil(num);
            printf("%d\n", r);
            break;
    }
}