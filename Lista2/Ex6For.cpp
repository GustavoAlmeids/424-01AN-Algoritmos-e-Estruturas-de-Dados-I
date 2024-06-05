#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    
    // Solicita ao usu�rio para fornecer um n�mero inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o n�mero fornecido � positivo
    if (n < 0) {
        printf("O numero fornecido nao e positivo.\n");
        return 1; // Encerra o programa com c�digo de erro 1
    }

    

    // Imprime as pot�ncias do n�mero de 0 at� a n-�sima pot�ncia
    printf("Potencias do numero %d de 0 ate %d-esima potencia:\n", n, n);
    for (i = 0; i <= n; i++) {
        printf("%d elevado a %d = %.0f\n", n, i, pow(n, i));
    }

    return 0;
}

