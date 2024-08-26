/*
3. Elabore um programa que leia vários números inteiros até o usuário 
digitar um número negativo. Para cada número lido deverá ser calculado 
e impresso seu fatorial.
*/
#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Digite um número (número negativo para parar): " << endl;
    cin >> num;

    while (num >= 0) {
        int fatorial = 1;
        
        for(int i=num; i>1; i--)
        {
            if(num>0)
            {
                fatorial = fatorial * i;
            }
        }

        cout << "Fatorial do número : " << num << " é: " << fatorial << endl;

        // Pede novo número ou encerra se for negativo
        cout << "Digite um número (número negativo para parar): " << endl;
        cin >> num;
    }

    return 0;
}


