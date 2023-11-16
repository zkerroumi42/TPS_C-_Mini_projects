#ifndef VEHICULE_H
#define VEHICULE_H


class Vehicule
{
    public:
        Vehicule(char *,char *,int,float);
         Vehicule(const Vehicule &);
        virtual ~Vehicule();
        virtual void afficher();
        void setPrixHT(float );
        float getPrixTTC();



    protected:
        char * Matricule;
        char * Marque;
        int AnneModele;
        float PrixHT;

    private:
};

#endif // VEHICULE_H
