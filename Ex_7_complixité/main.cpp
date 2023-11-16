#include <iostream>
#include <vector>
using namespace std;

// D�finition de la fonction de hachage
int h(int k) {
    return k % 9;
}

// Structure d'un �l�ment de la table de hachage
struct Element {
    int key;
    Element* next;
};

// Insertion d'un �l�ment dans la table de hachage
void insert(vector<Element*>& table, int key) {
    int index = h(key);
    Element* elem = new Element;
    elem->key = key;
    elem->next = NULL;
    if (table[index] == NULL) {
        // Cas o� l'indice est vide
        table[index] = elem;
    } else {
        // Cas de collision, on ajoute l'�l�ment � la fin de la cha�ne
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
