#include <iostream>

using namespace std;

int main() {
    int numero;

    // Declaramos e inicializamos las variables en 0
    // Es muy importante inicializarlas para evitar basura de memoria
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaMultiplos5 = 0;

    // Pedimos el número al usuario
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    // Evaluamos cada número desde el 1 hasta el número ingresado
    for (int i = 1; i <= numero; i++) {

        // 1. Condición para pares e impares
        if (i % 2 == 0) {
            // Si el residuo de dividir entre 2 es 0, es par
            sumaPares = sumaPares + i;
        } else {
            // Si no es par, por lógica es impar
            sumaImpares = sumaImpares + i;
        }

        // 2. Condición para múltiplos de 5
        // Se hace en un if separado porque un número puede ser par o impar Y TAMBIÉN múltiplo de 5 (ej: el 10 o el 15)
        if (i % 5 == 0) {
            sumaMultiplos5 = sumaMultiplos5 + i;
        }
    }

    // Mostramos los resultados
    cout << "========================================" << endl;
    cout << "Resultados desde 1 hasta " << numero << ":" << endl;
    cout << "========================================" << endl;
    cout << "La suma de los numeros pares es: " << sumaPares << endl;
    cout << "La suma de los numeros impares es: " << sumaImpares << endl;
    cout << "La suma de los multiplos de 5 es: " << sumaMultiplos5 << endl;

    return 0;
}