#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << "El numero mayor es: " << numero1 << endl;
    } else {
        cout << "El numero mayor es: " << numero2 << endl;
    }

    return 0;
}
