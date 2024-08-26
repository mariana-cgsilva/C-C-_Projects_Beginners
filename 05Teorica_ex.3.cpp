/*
3. Fazer um programa que faz a leitura de um vetor X com N reais , 
com tamanho máximo igual a 20 e	N deverá ser lido. Calcule o somatório 
de todos os elementos do vetor. Imprimir o vetor lido e o valor do somatório.
*/

#include <iostream>
using namespace std;

int main() {

    int tamanho_vetores;
    float vetorX[20];  // Vetor X com tamanho máximo 20
    int somatorio = 0;

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

        //Somatório dos elementos do vetor X
        for(int i=0; i<tamanho_vetores; i++)
        {
            somatorio += vetorX[i] ;
        }

        //Imprimir vetor X
        cout << "Vetor X: [";
        for (int i = 0; i < tamanho_vetores; i++) {
            cout << vetorX[i];
            if (i < tamanho_vetores - 1) cout << ", ";  // Adicionar vírgula entre os elementos
        }
        cout << "]" << endl;

        // Imprimir o valor do somatório
        cout << "Somatório dos elementos do vetor: " << somatorio << endl;

    } 
    else
    {
        cout << "Tamanho inválido. Deve ser entre 1 e 20." << endl;
    }

    return 0;
}