#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double num1, num2, resultado;
   
    
    cout <<"ingrese el primer numero" << endl;
    cin >> num1;
    cout <<"ingrse el segundo numero" << endl;
    cin >> num2;

    char operador;
    //el tipo de operador tiene que ser uno de los siguientes (+, -, *, /, ^, %)
    cout <<"ingrese el tipo de operador" << endl;
    cin >> operador;
    
    int numero1 = static_cast<int>(num1);
    int numero2 = static_cast<int>(num2);

    switch(operador){
        case '+':
              resultado = num1 + num2;
              cout <<"La suma es " << resultado << endl;
              break;
        case '-':
             resultado = num1 + num2;
             cout <<"La resta es " << resultado << endl;
             break;
        case '*':
             resultado = num1 * num2;
             cout <<"La multiplcacion es " << resultado << endl;
             break;
        case '/':
             resultado = num1 / num2;
             cout <<"La division es " << resultado << endl;
             break;
        case '^':
             resultado = pow(numero1, numero2);
             cout <<"La exponenciacion es " << resultado << endl;
             break;
        case '%':
              resultado = numero1 % numero2;
             cout <<"el modulo es " << resultado << endl;
             break;
        default:
             cout <<"Error" << endl;

    }
    
    return 0;
}