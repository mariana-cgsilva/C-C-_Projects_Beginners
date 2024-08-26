/*
2. Fazer um programa que faz a leitura de um vetor X com N inteiros, com tamanho máximo 
igual a 20 e N deverá ser lido. Multiplique cada elemento do vetor por um inteiro K 
(K também deverá ser lido). Imprimir o vetor lido, o valor da variável K e o vetor 
multiplicado por K.
*/

#include <iostream>
using namespace std;

int main() {

    int tamanho_vetores;
    int K;
    float vetorX[20];  // Vetor X com tamanho máximo 20
    float multiplicacao[20];

    cout<<"Digite o número de reais dos vetores (max. 20): "<<endl;
    cin>>tamanho_vetores;

    cout<<"Digite o valor de K: ";
    cin>>K;

    if (tamanho_vetores<=20 && tamanho_vetores > 0)
    {
        // Ler os elementos do vetor X
        for(int i=0; i<tamanho_vetores; i++)
        {
            cout<<"Número da posição "<<i<<" do vetor X:" <<endl;
            cin>>vetorX[i];
        }

        //Multiplicação do vetor X com K
        for(int i=0; i<tamanho_vetores; i++)
        {
            multiplicacao[i] = vetorX[i] * K;
        }

        //Imprimir vetor X
        cout << "Vetor X: [";
        for (int i = 0; i < tamanho_vetores; i++) {
            cout << vetorX[i];
            if (i < tamanho_vetores - 1) cout << ", ";  // Adicionar vírgula entre os elementos
        }
        cout << "]" << endl;

        //Imprimir o vetor multiplicacao
        cout << "Vetor multiplicacao: [";
        for (int i = 0; i < tamanho_vetores; i++) {
            cout << multiplicacao[i];
            if (i < tamanho_vetores - 1) cout << ", ";  // Adicionar vírgula entre os elementos
        }
        cout << "]" << endl;

    } 
    else
    {
        cout << "Tamanho inválido. Deve ser entre 1 e 20." << endl;
    }

    return 0;
}