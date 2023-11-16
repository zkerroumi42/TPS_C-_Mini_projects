#ifndef TEST_H
#define TEST_H


class test
{
    public:
        test();
       ~test();

        int Geta() { return a; }
        void Seta(int val) { a = val; }
        int Getb() { return b; }
        void Setb(int val) { b = val; }
        int Getc() { return c; }
        void Setc(int val) { c = val; }
        int Getd() { return d; }
        void Setd(int val) { d = val; }


    private:
        int a;
        int b;
        int c;
        int d;
};

#endif // TEST_H
