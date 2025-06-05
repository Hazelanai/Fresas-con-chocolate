#include <iostream>
using namespace std;

int main(){

    int numero;
    //el numero tiene que ser 1 a 7 y por numero se le asignara un dia
    cout <<"Ingrese el numero" << endl;
    cin >>numero;

    switch(numero){
        case 1:
             cout <<"Es lunes" << endl;
             break;
        case 2:
             cout <<"Es martes" << endl;
             break;
        case 3:
             cout <<"Es miercoles" << endl;
             break;
        case 4:
             cout <<"Es jueves" << endl;
             break;
        case 5:
             cout <<"Es viernes" << endl;
             break;
        case 6:
             cout <<"Es sabado" << endl;
             break;
        case 7:
             cout <<"Es domingo" << endl;
             break;   
        default:
             cout <<"Invalido, debe ser un numero entre 1 y 7" << endl;  

    }
    
    cout <<"El dia es " << numero << endl;

    return 0;
}