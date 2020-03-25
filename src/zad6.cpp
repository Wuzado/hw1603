#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str; // pobierz wartość ze strumienia (terminal/konsola)
    if(str.back() == 'a') { // jeżeli kończy się na a: "dziewczyna!"
        cout << "dziewczyna!" << endl;
    } else { // w przeciwnym razie: zwróć "chlopak?"
        cout << "chlopak?" << endl;
    }
    return 0; // wyjdź z programu (bez zwrócenia błędu)
}