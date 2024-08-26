/*
1. Os números primos possuem várias aplicações dentro da Computação, por exemplo 
na Criptografia. Um número primo é aquele que é divisível apenas por um e por 
ele mesmo. Faça um programa que peça um número inteiro e determine se ele é 
ou não um número primo.
*/

#include <iostream>
using namespace std;

int main() {

    int num;
    bool is_prime = true;  // Suponha inicialmente que o número é primo

    cout << "Digite um número inteiro: " << endl;
    cin >> num;

    if (num <= 1) {
        is_prime = false;  // Números menores ou iguais a 1 não são primos
    } else {
        for (int divisor = 2; divisor * divisor <= num; divisor++) {
            if (num % divisor == 0) {
                is_prime = false;  // Encontrou um divisor, então não é primo
                break;
            }
        }
    }

    if (is_prime) {
        cout << "O número " << num << " é um número primo." << endl;
    } else {
        cout << "O número " << num << " não é um número primo." << endl;
    }

    return 0;
}

