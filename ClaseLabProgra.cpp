#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string nombre;
    int edad;
    string carrera;
    int semestre;

    cout << "Ingrese el nombre del estudiante: ";
    getline (cin, nombre);

    cout << "Ingrese la edad ";
    cin >> edad;
    cin.ignore();

    cout << "Ingrese la carrera ";
    getline (cin, carrera);

    cout << "Ingrese el semestre ";
    cin >> semestre;

    cout << "--- Datos del estudiante ---"<<endl;
    cout << "Nombre; " <<nombre << endl;
    cout << "Edad; " <<edad << endl;
    cout << "carrera; " <<carrera << endl;
    cout << "semestre; " <<semestre << endl;


        return 0;
}


