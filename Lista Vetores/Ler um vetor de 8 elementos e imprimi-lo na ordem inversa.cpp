#include <iostream>
using namespace std;

int main() {
    int vetor[8];

    cout << "Digite 8 n�meros inteiros:" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> vetor[i];
    }

    cout << "Os elementos do vetor na ordem inversa s�o:" << endl;
    for (int i = 7; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

