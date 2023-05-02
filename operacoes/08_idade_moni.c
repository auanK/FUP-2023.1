#include <stdio.h>

int main() {
    int M, A, B, C;

    scanf("%d%d%d", &M, &A, &B);

    C = M - A - B;

    int maior = (A > B) ? A : B;
    maior = (C > maior) ? C : maior;

    printf("%d\n", maior);

    /*
    if(A > B && A > C){
         printf("%d\n", A );
     }else if(B > A && B > C){
         printf("%d\n", B );
     }else{
         printf("%d\n", C);
     }
     */
}