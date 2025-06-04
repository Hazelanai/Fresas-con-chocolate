#include <iostream>
using namespace std;

int main(){
    int edad;
    cout <<"Ingrese la edad" << endl;
    cin >> edad;

    if(edad > 12){
        cout <<"El precio de la entrada es $10.00" << endl;
    }else if(edad <= 12 && edad >= 5){
        cout <<"El precio de la entrada es $5.00"<< endl;
    }else{
        cout <<"La entrada es gratis" << endl;
    }
    
    return 0;
}