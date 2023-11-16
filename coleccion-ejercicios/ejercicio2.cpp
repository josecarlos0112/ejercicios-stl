#include <iostream>
#include "circulo.cpp"
#include "triangulo.cpp"


using namespace std;

int main() {
    cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << endl;
    return 0;
}