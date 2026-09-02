#include <iostream>
using namespace std;

int main() {
    float horas, pago, salario;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;

    cout << "Ingrese el pago por hora: ";
    cin >> pago;

    salario = horas * pago;

    if (horas > 40) {
        salario = salario + (salario * 0.10);
    }

    cout << "El salario total es: " << salario << " Bs" << endl;

    return 0;
}
