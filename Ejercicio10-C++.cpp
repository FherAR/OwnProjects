#include <iostream>
#include <string> // Necesario para manejar cadenas de texto

using namespace std;

// Función de apoyo que recibe 4 ceros/unos y devuelve su equivalente en base 16
char binarioAHex(string bloque) {
    if (bloque == "0000") return '0';
    if (bloque == "0001") return '1';
    if (bloque == "0010") return '2';
    if (bloque == "0011") return '3';
    if (bloque == "0100") return '4';
    if (bloque == "0101") return '5';
    if (bloque == "0110") return '6';
    if (bloque == "0111") return '7';
    if (bloque == "1000") return '8';
    if (bloque == "1001") return '9';
    if (bloque == "1010") return 'A';
    if (bloque == "1011") return 'B';
    if (bloque == "1100") return 'C';
    if (bloque == "1101") return 'D';
    if (bloque == "1110") return 'E';
    if (bloque == "1111") return 'F';
    return '?'; // Por seguridad en caso de error
}

int main() {
    string binario, hex_resultado = "";

    cout << "========================================" << endl;
    cout << "   CONVERSOR BINARIO A HEXADECIMAL      " << endl;
    cout << "========================================" << endl;
    cout << "Ingrese el numero binario: ";
    cin >> binario;

    // 1. Rellenar con ceros a la izquierda
    // Los bloques de 4 se agrupan de derecha a izquierda. 
    // Si la longitud total no es múltiplo de 4, añadimos ceros a la izquierda.
    while (binario.length() % 4 != 0) {
        binario = "0" + binario;
    }