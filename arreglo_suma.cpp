#include <iostream>
using namespace std;

int main(){

    int n;
    cout <<"Ingrese el numero" << endl;
    cin >> n;

    int numero[n];
    int suma = 0;

    for(int i = 0; i < n; i++){
        cout <<"ingrese el numero" << i + 1 << endl;
        cin >> numero[i];
        suma += numero[i];
    }

    cout <<"La suma de " << n << "es " << suma << endl;

    

    return 0;
}