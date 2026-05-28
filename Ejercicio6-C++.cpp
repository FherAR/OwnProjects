#include <iostream>

using namespace std;

int main() {
    double grados, x;
    double limiteInferior = 0;
    double limiteSuperior = 360.0;

    cout << "========================================" << endl;
    cout << "         APROXIMACION DEL SENO          " << endl;
    cout << "========================================" << endl;

    // 1. Validacion de datos usando do-while
    // El bucle se repetira mientras el usuario ingrese un numero invalido
    do {
        cout << "Ingrese un angulo entre " << limiteInferior << " y " << limiteSuperior << " grados: ";
        cin >> grados;

        if (grados < limiteInferior || grados > limiteSuperior) {
            cout << "-> Error: El angulo esta fuera de los limites. Intente de nuevo.\n" << endl;
        }
    } while (grados < limiteInferior || grados > limiteSuperior);

    // 2. Convertir grados a radianes (Obligatorio para la Serie de Taylor)
    double pi = 3.141592653589793;
    x = grados * pi / 180.0;

    // 3. Algoritmo de aproximacion (Serie de Taylor)
    int iteraciones = 10; // Con 10 terminos la aproximacion es muy buena
    double seno = 0.0;    // Acumulador de la suma total
    double termino = x;   // El primer termino de la serie siempre es 'x'

    for (int i = 1; i <= iteraciones; i++) {
        // Sumamos el termino actual al acumulador general
        seno += termino;

        // Calculamos el siguiente termino usando logica matematica
        // Multiplicamos por -x^2 para alternar el signo y subir la potencia
        // Dividimos entre (2n)*(2n+1) para generar el siguiente factorial
        termino = termino * (-1.0 * x * x) / ((2.0 * i) * (2.0 * i + 1.0));
    }

    // 4. Mostrar resultados
    cout << "\n========================================" << endl;
    cout << "Resultados para " << grados << " grados:" << endl;
    cout << "Seno aproximado (Taylor): " << seno << endl;
    cout << "========================================" << endl;

    return 0;
}