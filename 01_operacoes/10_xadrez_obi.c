#include <stdio.h>

int main() {
    int l, c, soma;

    scanf("%d%d", &l, &c);

    soma = l + c;
    printf("%d\n", 1 - soma % 2);

    /*if((L+C)%2 == 0){
        printf("1\n");
    }else {
        printf("0\n");
    } teste if*/
}