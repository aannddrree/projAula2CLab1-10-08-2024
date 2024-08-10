#include <stdio.h>

int main() {
    int numero;

    // Entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verificação se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}
