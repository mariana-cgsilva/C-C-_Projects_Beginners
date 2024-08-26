/*
Fazer um programa que faz a leitura de um vetor X, com N inteiros, 
com tamanho máximo igual a 20 e N deverá ser lido. Gere um segundo vetor 
com os valores do vetor X em ordem inversa. Imprimir o vetor X e vetor com a 
ordem inversa. 
*/

#include <iostream>
using namespace std;

int main() {
    int tamanho_vetores;
    int vetorX[20];  // Vetor X com tamanho máximo 20
    int vetorInverso[20];  // Vetor para armazenar os valores de X em ordem inversa

    // Ler o tamanho do vetor
    cout << "Digite o número de elementos do vetor (max. 20): ";
    cin >> tamanho_vetores;

    if (tamanho_vetores <= 20 && tamanho_vetores > 0) {
        // Ler os elementos do vetor X
        for (int i = 0; i < tamanho_vetores; i++) {
            cout << "Número da posição " << i << " do vetor X: ";
            cin >> vetorX[i];
        }

        // Gerar o vetor inverso
        for (int i = 0; i < tamanho_vetores; i++) {
            vetorInverso[i] = vetorX[tamanho_vetores - 1 - i];
        }

        // Imprimir o vetor X
        cout << "Vetor X: [";
        for (int i = 0; i < tamanho_vetores; i++) {
            cout << vetorX[i];
            if (i < tamanho_vetores - 1) cout << ", ";  // Adicionar vírgula entre os elementos
        }
        cout << "]" << endl;

        // Imprimir o vetor inverso
        cout << "Vetor em ordem inversa: [";
        for (int i = 0; i < tamanho_vetores; i++) {
            cout << vetorInverso[i];
            if (i < tamanho_vetores - 1) cout << ", ";  // Adicionar vírgula entre os elementos
        }
        cout << "]" << endl;

    } else {
        cout << "Tamanho inválido. Deve ser entre 1 e 20." << endl;
    }

    return 0;
}
