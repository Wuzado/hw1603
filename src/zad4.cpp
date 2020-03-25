#include <iostream>
using namespace std;

int main() {
    int a, b, c; // boki trójkąta
    cin >> a >> b >> c; // pobierz wartości ze strumienia (terminal/konsola)

    if (a + b < c || a + c < b || b + c < a) { // sprawdź czy warunki budowy trójkąta są spełnione
        cout << "Nieprawidlowe proporcje!" << endl; // jeżeli nie, zwróć błąd
        return -1;
    } else {
        if (a == b && a == c) { // jeżeli wszystkie boki trójkąta są równe:
            cout << "RWB" << endl; // równoboczny
        } else if (a == b || a == c || b == c) { // jeżeli trójkąt jest równoramienny:
            cout << "RWR" << endl; // równoramienny
        } else { // jeżeli inne warunki nie są spełnione, zwróć:
            cout << "RZB" << endl; // różnoboczny
        }
    }
    return 0; // wyjdź z programu (bez zwrócenia błędu)
}