#include <iostream>
using namespace std;

int main() {
    int vetor[10];
    int contPares = 0;

    cout << "Digite 10 n�meros inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
        if (vetor[i] % 2 == 0) {
            contPares++;
        }
    }

    cout << "O n�mero de elementos pares �: " << contPares << endl;

    return 0;
}

