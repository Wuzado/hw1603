#include <iostream>
using namespace std;

int main() {
    bool p, q; // dwie wartości binarne
    cin >> p >> q; // pobierz wartości ze strumienia (terminal/konsola) (każda wartość niezerowa liczy się jako 1)
    if(p || q) { // jeżeli jakikolwiek przełącznik jest włączony, zwróć 1, w przeciwnym razie 0.
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0; // wyjdź z programu (bez zwrócenia błędu)
}