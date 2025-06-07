#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout <<"ingrese el numero" << endl;
    cin >> n ;
    int num_correcto = 10;
    
    while(n != num_correcto){
        cout <<"No es el numero, intentelo de nuevo" << endl;
        cin >> n;
    }
    
    cout <<"Es el numero correto" << endl;
    return 0;
}