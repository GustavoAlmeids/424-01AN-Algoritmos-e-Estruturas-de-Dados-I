#include <iostream>
using namespace std;

int main() {
    int vetor[10];

    cout << "Digite 10 n�meros inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    cout << "Os elementos do vetor s�o:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

