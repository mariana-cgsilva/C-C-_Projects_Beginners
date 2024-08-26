/*
Ler um vetor de inteiros 10 posições. Escreva a seguir o valor e a 
posição do maior e menor elementos lidos.
*/
#include <iostream>
using namespace std;

int main() {
    int vetorX[10];  
    int i = 0;
    int maior;
    int menor;
    int posicao_maior = 0;
    int posicao_menor = 0;

    while(i!=10)
    {
        cout << "Número da posição " << i << " do vetor X: "<<endl;
        cin >> vetorX[i];

        if (i==0)
        {
            maior = vetorX[i];
            menor = vetorX[i]; 
            posicao_maior = i;
            posicao_menor = i;
        }
        else 
        {
            if (vetorX[i]>maior)
            {
                maior = vetorX[i];
                posicao_maior = i;
            }
            else if (vetorX[i]<menor)
            {
                menor = vetorX[i];
                posicao_menor = i;
            } 
        }
        i++;
    }

    // Imprimir o vetor X
    cout << "Vetor X: [";
    for (int i = 0; i < 10; i++) {
        cout << vetorX[i];
        if (i < 10 - 1) cout << ", ";  // Adicionar vírgula entre os elementos
    }
    cout << "]" << endl;

    // Imprimir o maior e menor valor e suas posições
    cout << "Maior elemento do vetor X: " << maior << " na posição " << posicao_maior << endl;
    cout << "Menor elemento do vetor X: " << menor << " na posição " << posicao_menor << endl;


    return 0;
}
