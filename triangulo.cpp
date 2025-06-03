#include <iostream> 
using namespace std;

int main(){

    int altura;
    cout <<"Ingrese la altura" << endl;
    cin >> altura;

    string asteriscos = "";

    for(i = 1; i <= altura; i++){
        asteriscos += "*";
        cout << asteriscos << endl;
    }
    return 0;
}