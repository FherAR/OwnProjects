#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Generar la semilla aleatoria
    srand(time(0));

    int MAXIMO = 100;

    // Al sumarle 1, cambiamos el rango de (0 a 99) a (1 a 100)
    int numero = (rand() % MAXIMO) + 1;

    bool acierto = false;
    int n;
    int intentos = 0; // Nuevo contador inicializado en 0

    cout << "========================================" << endl;
    cout << "         ADIVINA EL NUMERO SECRETO      " << endl;
    cout << "========================================" << endl;
    cout << "He pensado un numero entre 1 y " << MAXIMO << ". \n";
    cout << "¡Intenta adivinarlo!\n" << endl;

    // Bucle del juego
    while (acierto == false) {
        cout << "Introduzca un numero: ";
        cin >> n;

        // Sumamos 1 al contador por cada vez que el usuario ingresa un número
        intentos++;

        // Evaluamos las 3 posibilidades
        if (n == numero) {
            cout << "\n¡¡acertaste!!" << endl;
            acierto = true; // Rompe el bucle

        } else if (n < numero) {
            // Si el numero ingresado es menor al secreto
            cout << "-> El numero es MAYOR. Intenta de nuevo.\n" << endl;

        } else {
            // Si no acertó y tampoco es menor, por descarte lógico es mayor
            cout << "-> El numero es MENOR. Intenta de nuevo.\n" << endl;
        }
    }

    // Al terminar el bucle, mostramos las estadísticas
    cout << "========================================" << endl;
    cout << "Estadisticas del juego:" << endl;
    cout << "Numero secreto: " << numero << endl;
    cout << "Intentos totales: " << intentos << endl;
    cout << "========================================" << endl;

    return 0;
}