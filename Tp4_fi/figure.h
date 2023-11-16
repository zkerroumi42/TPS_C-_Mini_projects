#ifndef FIGURE_H
#define FIGURE_H


class figure
{
    public:

        virtual ~figure();

        virtual void affiche()const =0;
        virtual figure* copie() const =0;
        virtual double aire()const=0;

};

#endif // FIGURE_H
