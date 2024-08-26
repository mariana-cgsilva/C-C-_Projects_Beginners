/*
1. Fazer um programa que faz a leitura de dois vetores X e Y, ambos com N reais 
(N deve ser lido tb), com tamanho máximo igual a 20. Efetue a multiplicação 
dos respectivos  pares de elementos de X por Y, gerando um terceiro vetor Z. 
Imprima os vetores X, Y e Z.
*/

#include <iostream>
using namespace std;

int main() {

    int tamanho_vetores;
    float vetorX[20];  // Vetor X com tamanho máximo 20
    float vetorY[20];  // Vetor Y com tamanho máximo 20
    float vetorZ[20];  // Vetor Z para armazenar o resultado da multiplicação

    cout<<"Digite o número de reais dos vetores (max. 20): "<<endl;
    cin>>tamanho_vetores;

    if (tamanho_vetores<=20 && tamanho_vetores > 0)
    {
        // Ler os elementos do vetor X
        for(int i=0; i<tamanho_vetores; i++)
        {
            cout<<"Número da posição "<<i<<" do vetor X:" <<endl;
            cin>>vetorX[i];
        }

        // Ler os elementos do vetor Y
        for(int j=0; j<tamanho_vetores; j++)
        {
            cout<<"Número da posição "<<j<<" do vetor Y:" <<endl;
            cin>>vetorY[j];
        }
        
        // Multiplicação no vetor Z
        for (int i = 0; i < tamanho_vetores; i++) {
            vetorZ[i] = vetorX[i] * vetorY[i];
        }

        //Imprimir vetor X
        cout << "Vetor X: [";
        for (int i = 0; i < tamanho_vetores; i++) {
            cout << vetorX[i];
            if (i < tamanho_vetores - 1) cout << ", ";  // Adicionar vírgula entre os elementos
        }
        cout << "]" << endl;
        
        //Imprimir vetor Y
        cout << "Vetor Y: [";
        for (int j = 0; j < tamanho_vetores; j++) {
            cout << vetorY[j];
            if (j < tamanho_vetores - 1) cout << ", ";  // Adicionar vírgula entre os elementos
        }
        cout << "]" << endl;

        cout << "Vetor Z (X * Y): [";
        for (int i = 0; i < tamanho_vetores; i++) {
            cout << vetorZ[i];
            if (i < tamanho_vetores - 1) cout << ", ";
        }
        cout << "]" << endl;

    } 
    else
    {
        cout << "Tamanho inválido. Deve ser entre 1 e 20." << endl;
    }

    return 0;
}