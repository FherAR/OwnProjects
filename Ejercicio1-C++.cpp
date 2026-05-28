#include <iostream>

#include <iostream>

using namespace std;

int main() {
    // Encabezado
    cout << "========================================" << endl;
    cout << "   TABLAS DE MULTIPLICAR DEL 3 Y EL 9   " << endl;
    cout << "========================================" << endl;

    // Tabla del 3
    // Colocamos el "for" para poner un limite del 1 al 12
    cout << "Tabla del 3:" << endl;
    for (int i = 1; i <= 12; i++) {
        cout << "3 x " << i << " = " << 3 * i << endl;
    }

    cout << "----------------------------------------" << endl;

    // Tabla del 9
    cout << "Tabla del 9:" << endl;
    for (int i = 1; i <= 12; i++) {
        cout << "9 x " << i << " = " << 9 * i << endl;
    }

    return 0;
}