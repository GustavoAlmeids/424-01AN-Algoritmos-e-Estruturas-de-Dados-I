#include <stdio.h>

int main() {
    int n, soma = 0, digito;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    // Calcula a soma dos d�gitos usando um loop while
    while (n != 0) {
        // Extrai o �ltimo d�gito
        digito = n % 10;
        
        // Adiciona o d�gito � soma
        soma = soma+digito;
        
        // Remove o �ltimo d�gito do n�mero
        n /= 10;
    }

    // Exibe a soma dos d�gitos
    printf("A soma dos digitos do numero eh: %d\n", soma);

    return 0;
}

