#include <iostream>
using namespace std;

int sumDigits(int N) {
    if (N < 10) {
        // Cas de base : N est un chiffre
        return N;
    } else {
        // Cas général : on calcule la somme des chiffres de N / 10 et on y ajoute le dernier chiffre de N
        int lastDigit = N % 10;
        int remainingDigits = N / 10;
        return sumDigits(remainingDigits) + lastDigit;
    }
}

int main() {
    int N = 315;
    int sum = sumDigits(N);
    cout << "La somme des chiffres de " << N << " est " << sum << endl;
    return 0;
}
