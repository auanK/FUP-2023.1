#include <stdio.h>
int main() {
    int hora, minuto, dia, mes, ano;

    scanf("%d %d %d %d %d", &hora, &minuto, &dia, &mes, &ano);

    hora = hora % 12;
    printf("%02d:%02d %02d/%02d/%02d\n", hora, minuto, dia, mes, ano % 100);
}