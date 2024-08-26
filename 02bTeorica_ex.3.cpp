/*
3. Faça um programa para receber um número inteiro representando segundos 
e imprimir a quantidade correspondente em horas, minutos e segundos.
*/

#include <iostream>
using namespace std;

int main() {

    int segundos;
    int horas;
    int minutos;
    int segundos_restantes;

    cout << "Digite um número inteiro representando segundos: " << endl;
    cin >> segundos;

    horas = segundos / 3600;  // 1 hora = 3600 segundos
    minutos = (segundos % 3600) / 60;  // O resto dos segundos convertidos em minutos
    segundos_restantes = segundos % 60;  // O resto da divisão por 60 são os segundos restantes

    cout << segundos << " segundos correspondem a: " << endl;
    cout << horas << " horas, " << minutos << " minutos e " << segundos_restantes << " segundos." << endl;

    return 0;
}
