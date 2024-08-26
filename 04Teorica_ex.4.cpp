/*
4. Um usuário deseja utilizar um sistema protegido por senha.  Ele 
tem 3 tentativas para acertar a senha correta. Defina uma senha (tipo int) 
e faça um programa que solicite a senha do usuário. Enquanto ele não acertar o 
programa deverá imprimir “Acesso negado”. Caso contrário, deverá imprimir 
“Acesso liberado”.
*/

#include <iostream>
using namespace std;

int main() {

    int senha = 12345;
    int senha_digitada;
    int tentativa;

    for(tentativa = 0; tentativa < 3; tentativa++) {
        cout << "Digite a sua senha: " << endl;
        cin >> senha_digitada;

        if (senha_digitada == senha) {
            cout << "Acesso liberado." << endl;
            break;  // Sai do loop se a senha estiver correta
        } else {
            cout << "Acesso negado." << endl;
        }
    }

    if (tentativa == 3) {  // Se todas as tentativas forem usadas
        cout << "Número máximo de tentativas excedido. Acesso bloqueado." << endl;
    }

    return 0;
}
