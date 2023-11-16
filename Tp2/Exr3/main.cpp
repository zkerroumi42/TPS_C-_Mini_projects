#include <iostream>
#include<cstring>

using namespace std;


class chaine
{


    int longueur;
    char *ch;
public:
    chaine()
    {
        ch=new char[1];

        ch="";
        longueur=strlen(ch);
    }
    ~chaine()
    {
        delete [] ch;
    }
    void affiche ()
    {

        cout <<"la chaine est:"<<ch <<"\t\t de longueur :"<<longueur<<endl;
    }
    chaine(char *text)
    {
        longueur=strlen(text);
        strcpy(ch,text);
    }
    //constructeur par copy
    chaine (const chaine & c)
    {
        longueur=c.longueur;
        ch=new char[longueur+1];
        strcpy(ch,c.ch);
    }
    //surcharge de l'operateur d'affectation
    chaine& operator=(const chaine & c)
    {
        if (this!= &c)
        {
            delete [] ch;
            longueur=c.longueur;
            ch=new char[longueur+1];
            strcpy(ch,c.ch);


        }
        return *this;
    }
    bool operator ==(const chaine & c)
    {
        return strcmp(ch,c.ch)==0;

    }
    chaine operator +(const chaine &c)
    {
        chaine nv_ch;
        nv_ch.longueur=longueur+c.longueur;
        nv_ch.ch=new char[nv_ch.longueur+1];
        strcpy(nv_ch.ch,ch);
        strcat(nv_ch.ch,c.ch);
        return nv_ch;
    }
    char operator[](int index)
    {
        return ch[index];
    }

    friend ostream&operator<<(ostream &os,chaine & c){
    os<<c.ch;
    return os;
    }


};


main()
{
    chaine a("bonjour ");
    chaine b;
    b=a;
    a.affiche();
    b.affiche();
    chaine c("zakaria");
    chaine d=a+c;
    d.affiche();
     if (a == b)
    {
        cout << "a et b sont egales" << endl;
    }
    else   cout << "a et b ne sont pas  égales" << endl;

   cout << "c[1] = " << c[1] << endl;

   cout << "test : " << a << endl;




}
