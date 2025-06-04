#include <iostream>
using namespace std;

int main(){

    int monto;
    cout <<"Ingrese el monto de la compra" << endl;
    cin >> monto;
    int descuento = monto * 0.10 / 100;
    int monto_final = monto - descuento;

    if(monto > 100){
        cout <<"se le aplica descuento" << endl;
        cout <<"el pago final aplicando el descuento es de: " << monto_final << endl;
    }else{
        cout <<"no se le aplica descuento" << endl;
    }
    return 0;
}