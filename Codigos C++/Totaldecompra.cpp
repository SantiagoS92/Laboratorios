#include <iostream>
using namespace std;

int main() {
    int cantidad, total;

    cout << "Ingrese la cantidad de cuadernos: ";
    cin >> cantidad;

    total = cantidad * 12;

    cout << "El total a pagar es: " << total << " Bs" << endl;

    return 0;
}
