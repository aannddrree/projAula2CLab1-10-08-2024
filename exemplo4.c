#include <stdio.h>

int main() {
    float base, altura, area;

    // Entrada de dados
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    // Processamento
    area = (base * altura) / 2;

    // Saída de dados
    printf("A area do triangulo e: %.2f\n", area);

    return 0;
}
