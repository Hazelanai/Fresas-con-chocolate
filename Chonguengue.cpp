#include <iostream> 
#include <fstream>
using namespace std;

int main(){

    int n;
    ofstream el_archivo("salisa.txt");
    
    el_archivo << "hola mundo";
    el_archivo <<"como estas";

    el_archivo .close();

    for(int 1 = 1; i <= 10; i++){
        el_archivo << i << endl;
    }

    el_archivo .close();

    return 0;
}











