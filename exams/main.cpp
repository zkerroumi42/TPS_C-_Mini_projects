#include <iostream>

using namespace std;
class A
{
    public:
        A(){
        cout<<"cons a"<<endl;}
        A(const A& a){
        cout<<"copy a"<<endl;}
        virtual ~A(){
        cout<<"destr a"<<endl;
        }};

class B
{
    public:
        B(){
        cout<<"cons B"<<endl;}
        B(const B & b){
        cout<<"copy B"<<endl;}
        virtual ~B(){
        cout<<"destr B"<<endl;
        }};

 class X:public A
{
        public:
        X(){
        cout<<"cons X"<<endl;}
        X(const X& X){
        cout<<"copX X"<<endl;}
        virtual ~X(){
        cout<<"destr X"<<endl;
        }};

       class Y:public B
{
    public:
        Y(){
        cout<<"cons Y"<<endl;}
        Y(const Y& Y){
        cout<<"copy Y"<<endl;}
        virtual ~Y(){
        cout<<"destr Y"<<endl;
        }};
        void f(A a){cout<<"f(A)"<<endl;};
         void f(A *a){cout<<"f(A*)"<<endl;};
          void f(B b){cout<<"f(B )"<<endl;};
           void f(B *b){cout<<"f(B *)"<<endl;};



int main()
{
   B * b=new Y;
   f(b);
   delete b;
 cout<<"********************"<<endl;
    Y * y=new Y;
   f(y);
   delete y;
 cout<<"********************"<<endl;
    X x;
   f(x);
cout<<"********************"<<endl;
   A * a=new X;
   f(a);
   delete a;
cout<<"********************"<<endl;

   X * z=new X;
   f(z);
   delete z;

    return 0;
}
