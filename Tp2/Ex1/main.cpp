#include<iostream>

using namespace std;
class PileEntiers
{

    int max1;
    int * adr;
    int nelem;

public:
    PileEntiers(int n=100)
    {
        max1=n;
        adr=new int[n];
        nelem=0;
    }
    PileEntiers(const PileEntiers & pil)
    {
        max1=pil.max1;
        adr=new int[max1];
        nelem=pil.nelem;
         for (int i = 0; i < nelem; i++) {
        adr[i] = pil.adr[i];
    }
    }
    ~PileEntiers()
    {
        delete []adr;
    }
    void afficher(){
    for(int i=0 ;i<nelem ;i++) cout<< adr[i]<<'\t';
}


   bool Pleine()
{
    return nelem==max1;
}
   bool Vide()
{
    return nelem==0;
}
void Empiler(int i)
{
    if(!Pleine())
    {
        adr[nelem]=i;
        nelem++;
    }
    else cout<<"la pile est pleine !"<<endl;

}
int Depiler()
{
    if(!Vide())
    {
        nelem--;
        return adr[nelem];
    }
    else {
    cout<<"pile vide !"<<endl;
    return -1;
    }
}

 /*fonction member
 void operator<(int n){
    Empiler(n);
    cout<<"surcharger enpiler avec succee !"<<endl;
 }
  */

 void operator>(int n){
  Depiler();
  n=adr[nelem];
      cout<<"surcharger depiler avec succee !:n est :"<<n<<endl;

 }

 //fonction amie
 friend void operator<(PileEntiers& pill,int n){
    if(pill.nelem<pill.max1){
            pill.adr[pill.nelem++]=n;
        cout<<"surcharger enpiler avec succee !"<<endl;

    }
     else cout<<"la pile est pleine !"<<endl;

}
};


main()
{
     //declaration statique
   PileEntiers a(40);
   PileEntiers b;
   //declaration dynamique
   PileEntiers* p = new PileEntiers(50);
   PileEntiers c= a;
    //statique
    for(int i=0 ;i<=7;i++) a.Empiler(i);
    a<8;
    a>8;
    a<(b,15);


    a.afficher();
    b.Empiler(9);
    b.Empiler(10);

    int val= b.Depiler();
    c.afficher();
    b.afficher();

    cout<< "la valeur depiler (statique) :"<<val<<endl;

    //dynamique
    p->Empiler(11);
    p->Empiler(12);
    p->Empiler(13);
    int x = p->Depiler();
    p->afficher();
    cout << "la valeur depiler(dynamique): " << x << endl;
    delete p;
}
