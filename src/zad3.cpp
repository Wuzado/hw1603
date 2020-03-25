#include <iostream>
using namespace std;

int main() {
    float a, b, s; // a and b - wymiary drzwi, s - średnica stołu
    cout << "Wpisz wymiary drzwi (od 0 do 2) i srednice stolu (od 0 do 4): ";
    cin >> a >> b >> s; // pobierz wartości ze strumienia (terminal/konsola)

    if ((a >= 0 || b >= 0 || s >= 0) && (a < 2 || a < 2) && s < 4) { // sprawdź czy liczba mieści się w założeniach
        cout << "Wartosc poza granicami (a i b od 0 do 2, s od 0 do 4)" << endl; // zwróć błąd
        return -1;
    } else {
        if (s > a || s > b) { // jeżeli średnica jest większa od wymiarów drzwi:
            cout << "NIE" << endl;
        } else { // w przeciwnym razie:
            cout << "TAK" << endl;
        }
    }
    return 0; // wyjdź z programu (bez zwrócenia błędu)
}