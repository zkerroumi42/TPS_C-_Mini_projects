#ifndef MOTOR_H
#define MOTOR_H


class Motor
{
    public:
        Motor();
        Motor(int);
        virtual ~Motor();
        void trigger();

    private:
        int id;
};

#endif // MOTOR_H
