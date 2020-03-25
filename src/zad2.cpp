#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Wpisz liczbe calkowita od -1000 do 1000: ";
    cin >> a; // pobierz wartość ze strumienia (terminal/konsola)
    
    if (a < -1000 || a > 1000) { // sprawdź czy liczba mieści się w założeniach
        cout << "Wartosc poza granicami (od -1000 do 1000)" << endl; // zwróć błąd
        return -1;
    } else { 
        if (a % 2 == 0) { // jeżeli jest parzysta:
            cout << "P" << endl;
        } else if (a % 2 == 1) { // jeżeli jest nieparzysta:
            cout << "N" << endl;
        }
    }
    return 0; // wyjdź z programu (bez zwrócenia błędu)
}