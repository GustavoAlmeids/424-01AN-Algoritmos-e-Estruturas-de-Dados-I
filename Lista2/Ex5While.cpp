#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Digite 5 numeros inteiros:\n");

    // Loop para inserir 5 n�meros
    while (contador < 5) {
        printf("Digite o %d numero: ", contador + 1);
        scanf("%d", &numero);

        soma += numero; // Adiciona o n�mero � soma
        contador++; // Incrementa o contador de n�meros
    }

    // Calcula a m�dia
    media = soma / 5;
    printf("A media dos nemeros digitados eh: %.2f\n", media);

    return 0;
}

