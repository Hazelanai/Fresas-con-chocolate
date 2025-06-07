#include <iostream>
using namespace std;

int main(){

    int n;
    cout <<"Ingrese el numero" << endl;
    cin >> n;

    int numero[n];
    int suma = 0;

    for(int i = 0; i < n; i++){
        cout <<"ingrese el numero" << i << endl;
        cin >> numero[i];
        suma += numero[i];
    }

    float promedio = suma / n;

    cout <<"el promedio es " << promedio << endl;

    return 0;
}