/// FIBONACCI + RECAP

/// PUNCT BONUS INFO: Rusnac, Rusnac, Rares, Amir

/// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

/// fibonacci(0) = 0
/// fibonacci(1) = 1
/// fibonacci(2) = 1
/// fibonacci(3) = 2
/// fibonacci(4) = 3
/// fibonacci(5) = cat credeti?

/// fibonacci(n) = 
///     | fibonacci(n - 1) + fibonacci(n - 2) : n > 1
///     | 1 : n = 1
///     | 0 : n = 0

/// Scheletul oricarui program

#include <iostream> /// biblioteca pentru citire si afisare
/// i  de la input
/// o de la output

using namespace std; /// ca sa scrie cout in loc de std::cout

int main() {
    int numar, rezultat = 0;
    int anterior1 = 0, anterior2 = 1;
    cout << "Introdu un numar pentru a calcula fibonacci: ";
    cin >> numar;
    
    if (numar == 0) {
        rezultat = 0;
    } else if (numar == 1) {
        rezultat = 1;
    } else {
        while (numar > 1) {
            cout << "\ndebug: rezultat: " << rezultat;
            cout << "\ndebug: anterior1: " << anterior1;
            cout << "\ndebug: anterior2: " << anterior2;
            rezultat += anterior1 + anterior2;
            anterior2 = anterior1;
            anterior1 = rezultat;
            numar--;
        }   
    }
    
    cout << "\nFibonacci de numarul ales este " << rezultat << "\n";

    return 0;
}
