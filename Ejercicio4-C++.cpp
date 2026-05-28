#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "========================================\n";
    cout << "         ROTACION DE DIGITOS            \n";
    cout << "========================================\n";
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Variables para analizar el numero
    int copiaNumero = numero; // Usamos una copia para desarmarlo sin perder el original
    int suma = 0;
    int cantidadDigitos = 0;
    int divisor = 1; // Ayudara a separar el primer digito despues

    // 1. Calcular la suma, la cantidad de digitos y preparar el divisor
    while (copiaNumero > 0) {
        suma += copiaNumero % 10; // Extrae el ultimo digito y lo suma
        cantidadDigitos++;
        copiaNumero /= 10;        // Elimina el ultimo digito dividiendo entre 10

        // Construimos el divisor 
        if (cantidadDigitos > 1) {
            divisor *= 10;
        }
    }

    // 2. Calcular el promedio (division entera)
    int promedio = suma / cantidadDigitos;

    cout << "\n-> Suma de digitos: " << suma << endl;
    cout << "-> Cantidad de digitos: " << cantidadDigitos << endl;
    cout << "-> Promedio (rotaciones): " << promedio << "\n" << endl;

    // 3. Rotar el numero hacia la izquierda "promedio" veces
    for (int i = 0; i < promedio; i++) {
        // Ejemplo con 123 (divisor = 100)
        int primerDigito = numero / divisor;
        int restoDelNumero = numero % divisor; // 123 % 100 = 23

        // Armamos el nuevo numero: el resto sube de nivel (*10) y el primero pasa al final
        numero = (restoDelNumero * 10) + primerDigito;

        cout << "Rotacion " << i + 1 << ": " << numero << endl;
    }

    cout << "========================================\n";
    cout << "Resultado final: " << numero << endl;

    return 0;
}