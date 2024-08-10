#include <stdio.h>

int main() {
    int numero1, numero2, soma;

    // Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Processamento
    soma = numero1 + numero2;

    // Saída de dados
    printf("A soma de %d e %d e: %d\n", numero1, numero2, soma);

    return 0;
}
