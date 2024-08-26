/*
Exemplo
Construir um programa que faz a leitura de uma matriz quadrada de reais 
de tamanho N por N (máximo 20 x 20). Somar todos os elementos da diagonal 
principal. Imprimir a matriz lida e o valor da soma obtido.
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    float matriz[20][20];  // Matriz de tamanho máximo 20x20
    float soma_diagonal = 0;

    // Ler o tamanho da matriz N x N
    cout << "Digite o tamanho da matriz (N x N) [max 20]: ";
    cin >> N;

    // Verificar se o tamanho N é válido
    if (N <= 20 && N > 0) {
        // Ler os elementos da matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << "Elemento [" << i << "][" << j << "] da matriz: ";
                cin >> matriz[i][j];
            }
        }

        // Calcular a soma dos elementos da diagonal principal
        for (int i = 0; i < N; i++) {
            soma_diagonal += matriz[i][i];
        }

        // Imprimir a matriz lida
        cout << "Matriz lida:" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << matriz[i][j] << "\t";  // Usando tabulação para alinhamento
            }
            cout << endl;
        }

        // Imprimir a soma da diagonal principal
        cout << "Soma da diagonal principal: " << soma_diagonal << endl;

    } else {
        cout << "Tamanho inválido. Deve ser entre 1 e 20." << endl;
    }

    return 0;
}
