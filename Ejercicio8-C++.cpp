#include <iostream>
#include <iomanip> // Libreria obligatoria para manipular el formato (alineacion)

using namespace std;

int main() {
    int numero;

    // Pedimos el número al usuario
    cout << "Introduzca un numero: ";
    cin >> numero;

    cout << "La tabla de multiplicar del " << numero << " es:" << endl;

    // Bucle del 1 al 10
    for (int i = 1; i <= 10; i++) {
        // setw(2) reserva 2 espacios para el multiplicador (1 al 10)
        // setw(3) reserva 3 espacios para el resultado final
        cout << numero << " x " << setw(2) << i << " = " << setw(3) << (numero * i) << endl;
    }

    return 0;
}