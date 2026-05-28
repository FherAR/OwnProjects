#include <iostream>

using namespace std;

int main() {
    int suma = 0; // Nuestro acumulador, siempre inicia en 0

    cout << "===================================================" << endl;
    cout << "  Suma de los 20 primeros multiplos de 3" << endl;
    cout << "===================================================" << endl;

    cout << "Multiplos a sumar: ";

    // Bucle que se repite exactamente 20 veces
    for (int i = 1; i <= 20; i++) {

        // Calculamos el múltiplo actual
        int multiplo = i * 3;

        // Lo imprimimos en pantalla para visualizar la secuencia
        cout << multiplo << " ";

        // Sumamos el múltiplo al acumulador
        suma += multiplo;
    }

    // Mostramos el resultado final
    cout << "\n---------------------------------------------------" << endl;
    cout << "La suma total es: " << suma << endl;
    cout << "---------------------------------------------------" << endl;

    return 0;
}