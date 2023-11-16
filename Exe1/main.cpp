#include <iostream>
using namespace std;

class PileEntiers{
    int max1 ; // nombre maxi d'�l�ments de la pile
    int * adr ; // adresse du tableau repr�sentant la pile
    int nelem ; // nombre d'�l�ments courant de la pile
public :
    void affiche(){
     for(int i=0; i<nelem; i++)
            adr[i] ;
    }
    PileEntiers (int n=100){
        max1 = n;
        adr = new int[n];
        nelem = 0;
    } //constructeur : alloue dynamiquement de la m�moire, taille de la pile(100 par d�faut), initialise nelem � 0 ;
    ~PileEntiers (){
        delete [] adr;
    }
    void Empiler(int i){
        if(nelem < max1){
            adr[nelem] = i;
            nelem++;
        }
        else{
            cout << "Pile pleine." << endl;
        }
    }
    int Depiler(){
        if(nelem > 0){
            nelem--;
            return adr[nelem];
        }
        else{
            cout << "Pile vide." << endl;
            return -1;
        }
    } //retourne la valeur de l'entier supprim�
    bool Pleine(){
        return nelem == max1;
    }
    bool Vide(){
        return nelem == 0;
    }

    //operateur d'affectation meme a par copy seulement on ajout delet [] adr;

    //adr[nbr++]=x; enpiler
    //adr[--nbr]=x; dipiler
    // ou int dipiler(){ return adr[--nbr];}

    PileEntiers(const PileEntiers& p){
        max1 = p.max1;
        nelem = p.nelem;
        adr = new int[max1];
        for(int i=0; i<nelem; i++){
            adr[i] = p.adr[i];
        }
    } //fonction amie pour retirer un �l�ment de la pile
    bool operator<(int n){
        Empiler(n);
        return true;
    } //fonction membre pour ajouter un �l�ment � la pile avec surcharge de l'op�rateur <
    friend bool operator>(PileEntiers& p, int& n){
        if(p.nelem > 0){
            n = p.adr[p.nelem-1];
            p.nelem--;
            return true;
        }
        else{
            return false;
        }
    } //fonction amie pour retirer un �l�ment de la pile avec surcharge de l'op�rateur >
};

int main(){
PileEntiers a, b(40); // pile automatique et PileEntiers *ad;// pile dynamique
  for(int i=0;i<10;i++)  a.Empiler(i);
  a.affiche();
    a.Empiler(2);
    a.Empiler(3);
    int x;
    a > x;
    cout << "Valeur enpiler : " << x << endl;
    b < 4;
    b < 5;
    b < 6;
    if(b > x){
        cout << "Valeur depilee : " << x << endl;
    }
    return 0;
}
