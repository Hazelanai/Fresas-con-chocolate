#include <iostream>
using namespace std;

void minijuegoMagma() {
    string opciones[3] = {"Piedra", "Papel", "Magma"};
    int jugadasGuardia[3] = {2, 0, 1}; // Magma, Piedra, Papel
    int jugador, maquina;
    int puntosJugador = 0, puntosMaquina = 0;
    int ronda = 0;

    cout << "Debes ganarle al guardián de piedra.\n";

    while (puntosJugador < 2 && puntosMaquina < 2 && ronda < 3) {
        cout << "\n0 = Piedra | 1 = Papel | 2 = Magma\nTu elección: ";
        cin >> jugador;

        if (jugador >= 0 && jugador <= 2) {
            maquina = jugadasGuardia[ronda];
            cout << "El guardián eligió: " << opciones[maquina] << endl;

            if (jugador == maquina) {
                cout << "Empate.\n";
            }
            else if (
                (jugador == 0 && maquina == 2) || // Piedra gana a Magma
                (jugador == 2 && maquina == 1) || // Magma gana a Papel
                (jugador == 1 && maquina == 0)    // Papel gana a Piedra
            ) {
                cout << "Ganas la ronda.\n";
                puntosJugador++;
            } else {
                cout << "Pierdes la ronda.\n";
                puntosMaquina++;
            }

            ronda++; // solo avanza si la entrada fue válida
        }
    }

    cout << (puntosJugador > puntosMaquina ? "\nGanaste.\n" : "\nPerdiste.\n");
}

int main() {
    minijuegoMagma();
    return 0;
}