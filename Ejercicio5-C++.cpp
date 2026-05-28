#include <iostream>

using namespace std;

int main() {
    int fechas;
    int fechasLeidos = 0;       // Contador de intentos totales (máximo 10)
    int bisiestosLeidos = 0;   // Contador de éxitos (máximo 3)

    cout << "==================================================" << endl;
    cout << "             DETECTOR DE FECHAS BISIESTOS          " << endl;
    cout << "==================================================" << endl;
    cout << "El programa se detendra al leer 10 fechas en total \n";
    cout << "o cuando encuentre 3 fechas bisiestos.\n\n";

    // El bucle se repite MIENTRAS se cumplan AMBAS condiciones:
    // 1. Que hayamos leído menos de 10 años
    // 2. Que hayamos encontrado menos de 3 bisiestos
    while (fechasLeidos < 10 && bisiestosLeidos < 3) {

        cout << "Ingrese la fecha (Lectura " << (fechasLeidos + 1) << "/10): ";
        cin >> fechas;

        fechasLeidos++; // Contamos que ya hicimos una lectura general

        // Lógica matemática del año bisiesto:
        // Es múltiplo de 4 Y (NO es múltiplo de 100 O SÍ es múltiplo de 400)
        if ((fechas % 4 == 0 && fechas % 100 != 0) || (fechas % 400 == 0)) {
            cout << "   -> La fecha " << fechas << " ES BISIESTO" << endl;
            bisiestosLeidos++; // Solo aumentamos este contador si fue bisiesto
        } else {
            cout << "   -> La fecha " << fechas << " NO es bisiesto." << endl;
        }
        cout << "--------------------------------------------------" << endl;
    }
    
    cout << "\n==================================================" << endl;
    cout << "                 RESUMEN FINAL                    " << endl;
    cout << "==================================================" << endl;

    if (bisiestosLeidos == 3) {
        cout << "El programa termino porque se encontraron 3 fechas bisiestos." << endl;
    } else {
        cout << "El programa termino porque se alcanzo el limite de 10 lecturas." << endl;
    }

    return 0;
}