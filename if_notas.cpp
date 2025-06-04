#include <iostream>
using namespace std;

int main(){

    float nota;
    cout <<"Ingrese la nota" << endl;
    cin >> nota;

    //Evaluar la calificación según el rango de notas de 0 a 100
    if(nota >= 0 && nota <= 59){
        cout <<"Su calificacion es F" << endl;
    }else if(nota >= 60 && nota <= 69){
        cout <<"Su calificacion es D" << endl;
    }else if(nota >= 70 && nota <= 79){
        cout <<"Su calificacion es C" << endl;
    }else if(nota >= 80 && nota <= 89){
        cout <<"Su calificacion es B" << endl;
    }else{
        cout <<"Su calificacion es A" << endl;
    }

    return 0;
}