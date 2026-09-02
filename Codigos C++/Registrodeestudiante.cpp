#include <iostream>
using namespace std;

int main() {
    string nombre, carrera;
    int edad, semestre;

    cout << "Ingrese el nombre completo: ";
    cin >> nombre;

    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "Ingrese la carrera: ";
    cin >> carrera;

    cout << "Ingrese el semestre: ";
    cin >> semestre;

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Carrera: " << carrera << endl;
    cout << "Semestre: " << semestre << endl;

    return 0;
}
