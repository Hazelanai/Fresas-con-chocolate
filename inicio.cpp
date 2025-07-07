#include <iostream>
#include <string>
using namespace std;

// Función para jugar la aventura
void jugarAventura(string nombre) {
    if (nombre == "Nerysia") {
        cout << "\nBienvenido a Nerysia, la tierra del agua y la niebla misteriosa.\n";
        cout << "Descubres un templo oculto bajo el lago sagrado...\n";
    
    }
    else {
        cout << "Aventura desconocida.\n";
    }
}

int main() {
    int eleccion;

    cout << "Elige tu aventura:\n";
    cout << "1. Nerysia (Agua)\n";
    cout << "Opción: ";
    cin >> eleccion;

    if (eleccion == 1) {
        jugarAventura("Nerysia");
    } else {
        cout << "Aventura no disponible.\n";
    }

    return 0;
}