/*
4. Construir um programa que leia o salário mensal atual de um 
funcionário e o percentual de reajuste. Determine o valor do novo 
salário e imprima os valores lidos e o novo salário.
*/

#include <iostream>
using namespace std;

int main() {

    float salario; 
    float reajuste;
    float novo_salario;

    cout<<"Digite o salário mensal do funcionário: "<<endl;
    cin>>salario;
    cout<<"Digite o percentual de reajuste: "<<endl;
    cin>>reajuste; 

    novo_salario = salario + salario*(reajuste/100);

    cout<<"Salário antigo: "<<salario<<endl;
    cout<<"Percentual reajuste: "<<reajuste<<"%"<<endl;
    cout<<"Salário novo: "<<novo_salario<<endl;
    
    return 0;
}

