#include <iostream>
using namespace std;

void afficher_matrice_spirale(int matrice[4][5], int m, int n) {
    int i, j, k = 0, l = 0;
    while (k < m && l < n) {
        // parcourir la ligne de gauche à droite
        for (i = l; i < n; ++i) {
            cout << matrice[k][i] << " ";
        }
        k++;

        // parcourir la colonne de haut en bas
        for (i = k; i < m; ++i) {
            cout << matrice[i][n-1] << " ";
        }
        n--;

        // parcourir la ligne de droite à gauche
        if (k < m) {
            for (i = n-1; i >= l; --i) {
                cout << matrice[m-1][i] << " ";
            }
            m--;
        }

        // parcourir la colonne de bas en haut
        if (l < n) {
            for (i = m-1; i >= k; --i) {
                cout << matrice[i][l] << " ";
            }
            l++;
        }
    }
}

int main() {
    int matrice[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    afficher_matrice_spirale(matrice, 4, 5);
    return 0;
}
