#include <iostream>
using namespace std;

int main() {
    float monto, descuento, total;

    cout << "Ingrese el monto de la compra: ";
    cin >> monto;

    if (monto > 100) {
        descuento = monto * 0.10;
        total = monto - descuento;
    } else {
        total = monto;
    }

    cout << "El total a pagar es: " << total << " Bs" << endl;

    return 0;
}
