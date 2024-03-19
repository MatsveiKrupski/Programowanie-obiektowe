#include <iostream>
#include <string>
using namespace std;

int mnozenie (int x, int y){
    int wynik = x*y;
    return wynik;
}

int main() {
    string x; string y; int wynik;
    int x1 = 0; int y1 = 0;
    cout << "Dzien dobry, ten program oblicza iloraz dwuch wprowadzonych calkowitych znaczen x i y" << endl;
    cout << "Zeby wyjsc z programu trzeba wprowadzic literke 'e'" << endl;
    while (true) {
        cout << "Prosze wprowadzic dane" << endl;
        cout << "x=";
        cin >> x;
        if (x == "e") {
            cout << "Program zostal zakonczony";
            break;
        }
        else {
            try {
                x1 = stoi(x);
            } catch (invalid_argument const &e) {
                cout << "Nieprawidlowo wprowadzone dane" << endl;
                continue;
            }
        }
        cout << "y=";
        cin >> y;
        if (y == "e") {
            cout << "Program zostal zakonczony";
            break;
        }
        else {
            try {
                y1 = stoi(y);
            } catch (invalid_argument const &e) {
                cout << "Nieprawidlowo wprowadzone dane" << endl;
                continue;
            }
        }
        wynik = mnozenie(x1,y1);
        cout << "Wynik mnozenia = " << wynik << endl;
    }
    return 0;
}
