#include <iostream>

using namespace std;

int main() {
    long long n, m; // Usamos long long porque la serie crece rapido

    cout << "========================================" << endl;
    cout << "   SERIE DE FIBONACCI EN UN RANGO       " << endl;
    cout << "========================================" << endl;

    // 1. Validar que el rango ingresado tenga sentido logico
    do {
        cout << "Ingrese el limite inferior (n): ";
        cin >> n;
        cout << "Ingrese el limite superior (m): ";
        cin >> m;

        if (n > m || n < 0) {
            cout << "-> Error: Rango invalido. Asegurese de que n sea menor o igual a m y positivos.\n" << endl;
        }
    } while (n > m || n < 0);

    cout << "\nSerie de Fibonacci entre " << n << " y " << m << ":" << endl;
    cout << "-> ";

    // 2. Variables iniciales de la serie
    long long a = 0;
    long long b = 1;
    long long siguiente = 0;
    bool seImprimioAlgo = false; // Bandera para saber si encontramos numeros

    // 3. Bucle generador
    // El ciclo continua MIENTRAS el numero actual (a) no supere el limite (m)
    while (a <= m) {

        // Si el numero actual ya alcanzo o supero el limite inferior, lo imprimimos
        if (a >= n) {
            cout << a << " ";
            seImprimioAlgo = true;
        }

        // Calculamos el proximo numero de la serie
        siguiente = a + b;

        // Desplazamos los valores: 'b' pasa a ser el anterior ('a'),
        // y el 'siguiente' pasa a ser el actual ('b')
        a = b;
        b = siguiente;
    }

    if (!seImprimioAlgo) {
        cout << "No hay numeros de Fibonacci en este rango especifico.";
    }

    cout << "\n\n========================================" << endl;

    return 0;
}