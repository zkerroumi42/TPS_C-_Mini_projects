#ifndef FORME_H
#define FORME_H


class Forme
{
    public:
        Forme();
        virtual ~Forme();
        virtual void description();
        virtual  double aire()=0;
        friend void affichageDesc(Forme&);

};

#endif // FORME_H
