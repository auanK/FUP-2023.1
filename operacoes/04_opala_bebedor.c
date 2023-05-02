#include <stdio.h>

int main() {
    float velocidade, tempo, consumo, distancia, desempenho;
    scanf("%f\n", &velocidade);
    scanf("%f\n", &tempo);
    scanf("%f\n", &consumo);

    tempo = tempo / 60;
    distancia = velocidade * tempo;
    desempenho = distancia / consumo;

    printf("%.02f\n", desempenho);
}