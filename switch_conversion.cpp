#include <iostream>
using namespace std;

int main(){

    double n;
    //la cantidad a la que se le hara la conversion
    cout <<"ingrese la cantidad" << endl;
    cin >> n;
    int opcion;
    //Son tres opciones (1,2 o 3)
    cout <<"ingrese la opcion" << endl;
    cin >> opcion;
    double conversion;

    switch(opcion){
        case 1:
             conversion = n * 0.88;
             cout <<"La conversion de USD a EUR es " << conversion << endl;
             break;
        case 2:
             conversion = n * 144.93;
             cout << "La conversion de USD a JPY es " << conversion << endl;
             break;
        case 3:
             conversion = n * 0.74;
             cout <<"La conversion de USD a GBP es " << conversion << endl;
             break;
        default:
             cout <<"opcion invalida" << endl;
    }

    cout <<"La conversion es " << conversion << endl;

    return 0;
}