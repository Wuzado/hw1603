#include <iostream>
#include <iomanip> // potrzebne do fixed & setprecision()
using namespace std;

int main() {
    float a;
    cout << fixed << setprecision(2); // ustaw stałą precyzję zmiennoprzecinkową (dwie liczby po przecinku)
    cout << "Wpisz liczbe rzeczywista od -10000 do 10000: ";
    cin >> a; // pobierz wartość ze strumienia (terminal/konsola)
    
    if (a < -10000 || a > 10000) { // sprawdź czy liczba mieści się w założeniach
        cout << "Wartosc poza granicami (od -10000 do 10000)" << endl; // zwróć błąd
        return -1;
    } else {
        if (a >= 0) { // sprawdź czy liczba jest ujemna
            cout << a << endl; // nie trzeba zmieniać liczby, zwróć ją
        } else {
            cout << a * -1 << endl; // zwróć liczbę przeciwną do a
        }
    }
    return 0; // wyjdź z programu (bez zwrócenia błędu)
}
