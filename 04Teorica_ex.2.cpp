/*
2. Elabore um programa que leia vários números, até o usuário digitar 0. 
O programa deverá imprimir, quantos números foram lidos, qual é o maior 
e o menor.
*/

#include <iostream>
using namespace std;

int main() {

    int num; 
    int qtd_num = 0;  // Inicializando a quantidade de números lidos como 0
    int maior;
    int menor;

    cout << "Digite um número (0 para parar): " << endl;
    cin >> num;

    if (num != 0) {  // Se o primeiro número for diferente de 0, inicializamos maior e menor
        maior = num;
        menor = num;
    }

    while (num != 0) {
        qtd_num++;
        
        // Atualizar maior e menor
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        
        cout << "Digite um número (0 para parar): " << endl;  
        cin >> num;
    }

    if (qtd_num > 0) {  // Verifica se algum número foi lido
        cout << "Quantidade de números lidos: " << qtd_num << endl;
        cout << "Maior número: " << maior << endl; 
        cout << "Menor número: " << menor << endl;
    } else {
        cout << "Nenhum número foi inserido." << endl;
    }

    return 0;
}

