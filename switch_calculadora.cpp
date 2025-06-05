#include <iostream>
using namespace std;

int main(){

    double num1, num2, resultado;
    cout <<"ingrese los dos numeros" << endl;
    cin >> num1 >> num2;

    char operacion;
    //el tipo d operacion tiene que ser una de las siguientes; (+, -, *, /)
    cout <<"ingrese el tipo de operacion" << endl;
    cin >> operacion;

    switch(operacion){
        case '+':
             resultado = num1 + num2;
             break;
        case '-':
             resultado = num1 - num2;
             break;
        case '*':
             resultado = num1 * num2;
             break;
        case '/':
             resultado = num1 / num2;
             break;
        default:
            cout <<"Error" << endl;
    }

    cout <<"El resultado es " << resultado << endl;

    return 0;
}