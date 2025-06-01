#include <iostream>
using namespace std;

int main(){

    int n;
    //Del numero que se ingrese se imprimira la tabla de multiplicar
    cout <<"Ingrese el numero" << endl;
    cin >> n;

    for(int i = 1; i <= 10; 1++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}