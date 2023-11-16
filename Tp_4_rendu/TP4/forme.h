#ifndef FORME_H
#define FORME_H


class Forme
{
    public:
        Forme();
        virtual ~Forme();
        virtual void description();
        friend void affichageDesc(Forme&);

};

#endif // FORME_H
