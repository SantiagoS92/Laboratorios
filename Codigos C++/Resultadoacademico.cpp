#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Ingrese la nota final: ";
    cin >> nota;

    if (nota >= 51) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }

    return 0;
}
