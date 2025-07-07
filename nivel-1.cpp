#include <iostream>
using namespace std;

void minijuegoBrazas() {
    int secreto = 7;
    int intento;

    cout << "\n--- Minijuego: Adivina el número de brazas ---\n";
    cout << "Adivina un número del 1 al 10. Tienes 3 intentos.\n";

    cout << "Intento 1: ";
    cin >> intento;

    if (intento == secreto) {
        cout << "Correcto, Has adivinado a la primera.\n";
    } 
    else {
        cout << "No es el número.\n";
        cout << "Intento 2: ";
        cin >> intento;

        if (intento == secreto) {
            cout << "Correcto, Has adivinado a la segunda.\n";
        } 
        else {
            cout << "No es el número.\n";
            cout << "Intento 3: ";
            cin >> intento;

            if (intento == secreto) {
                cout << "Correcto, Has adivinado a la tercera.\n";
            } 
            else {
                cout << "Perdiste, Ya no tienes más oportunidades.\n";
                cout << "El número correcto era " << secreto << ".\n";
            }
        }
    }

    cout << "Minijuego terminado.\n";
}

int main() {
    minijuegoBrazas();
    return 0;
}
