#include <iostream>
using namespace std;

int main(){

    int n;
    // calcular la suma de los números pares desde 1 hasta n
    cout <<"Ingrese el numero" << endl;
    cin >> n;
    int suma = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            suma += i;
            cout << i << endl;
        }
    }

    cout <<"La suma de los numeros pares de 1 hasta" << n <<"es" << suma << endl;

    return 0;
}