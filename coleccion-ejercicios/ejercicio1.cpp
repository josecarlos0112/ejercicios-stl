#include <iostream>

using namespace std;

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int mult(int a, int b) {
        return a * b;
    }
    int div(int a, int b) {
        return a / b;
    }
    int mod(int a, int b) {
        return a % b;
    }
    int potencia(int a, int b) {
        int resultado = 1;
        for (int i = 0; i < b; i++) {
            resultado *= a;
        }
        return resultado;
    }
    int log(int a) {
        int resultado = 0;
        while (a > 0) {
            a /= 10;
            resultado++;
        }
        return resultado;
    }
    int logaritmo(int a, int b) {
        return log(a) / log(b);
    }

}

int main() {
    int a;
    int b;
    cout << "Ingrese el primer numero " << endl;
    cin >> a;
    cout << "Ingrese el segundo numero " << endl;
    cin >> b;
    cout << "Suma: " << Matematicas::suma(a, b) << endl;
    cout << "Resta: " << Matematicas::resta(a, b) << endl;
    cout << "Multiplicacion: " << Matematicas::mult(a, b) << endl;
    cout << "Division: " << Matematicas::div(a, b) << endl;
    cout << "Modulo: " << Matematicas::mod(a, b) << endl;
    cout << "Potencia: " << Matematicas::potencia(a, b) << endl;
    cout << "Logaritmo: " << Matematicas::logaritmo(a, b) << endl;
    return 0;
}