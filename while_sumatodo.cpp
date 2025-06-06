#include <iostream>
using namespace std;

int main(){

    int numero;
    int suma = 0;
    //que sea distito a 0 o sino termina 
    cout <<"ingrese el primer numero" << endl;
    cin >> numero;

   
    while(numero > 0){
        // se suman los numeros hasta que se introduzca un 0
        suma = suma + numero;
        //distinto a 0 o sino el ciclo termina
        cout <<"Ingrese otro numero" << endl;
        cin >> numero;
    }

    cout <<"La suma total es" << suma << endl;
    return 0;
}