#include "motor.h"
#include<iostream>
using namespace std;
Motor::Motor()
{
}

Motor::~Motor()
{
}
Motor::Motor(int id):id(id){}

void Motor::trigger(){
    cout<<"Moteur   "<<id<<"   est active"<<endl;
}
