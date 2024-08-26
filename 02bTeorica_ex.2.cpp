/*Suponha que o valor de uma certa variável inteira A=5 e de uma Variável B=13, 
como poderíamos trocar o valor dessas variáveis, ou seja, A=13 e B=5?
*/

#include <iostream>
using namespace std;

int main() {
    int A = 5;
    int B = 13;
    int C;

    C = B;
    B = A;
    A = C;

    cout<<"Valor de A= "<<A<<endl;
    cout<<"Valor de B= "<<B<<endl;

    return 0;
}

