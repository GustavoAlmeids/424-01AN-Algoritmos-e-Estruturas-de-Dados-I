#include <iostream>
using namespace std;

int main() {
    float vetor[20];
    float soma = 0;

    cout << "Digite 20 n�meros reais:" << endl;
    for (int i = 0; i < 20; i++) {
        cin >> vetor[i];
        soma += vetor[i];
    }

    float media = soma / 20;

    cout << "A m�dia dos valores �: " << media << endl;

    return 0;
}

