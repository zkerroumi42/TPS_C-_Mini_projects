#include <iostream>
#include <vector>
using namespace std;

// Définition de la fonction de hachage
int h(int k) {
    return k % 9;
}

// Structure d'un élément de la table de hachage
struct Element {
    int key;
    Element* next;
};

// Insertion d'un élément dans la table de hachage
void insert(vector<Element*>& table, int key) {
    int index = h(key);
    Element* elem = new Element;
    elem->key = key;
    elem->next = NULL;
    if (table[index] == NULL) {
        // Cas où l'indice est vide
        table[index] = elem;
    } else {
        // Cas de collision, on ajoute l'élément à la fin de la chaîne
        Element* current = table[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = elem;
    }
}

// Affichage de la table de hachage
void display(vector<Element*> table) {
    for (int i = 0; i < table.size(); i++) {
        cout << "[" << i << "]: ";
        Element* current = table[i];
        while (current != NULL) {
            cout << current->key << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
}

int main() {
    vector<Element*> table(9);
      // Table de hachage initialement vide
         for (int i = 0; i < 9; i++) {
         table[i] = NULL;
}

    int keys[] = {5, 28, 19, 15, 20, 33, 12, 17, 10};
    int num_keys = sizeof(keys) / sizeof(keys[0]);
    for (int i = 0; i < num_keys; i++) {
        insert(table, keys[i]);
    }
    display(table);
    return 0;
}
