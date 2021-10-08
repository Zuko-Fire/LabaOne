#include "Car.h"
#include <string>
#include <Windows.h>
#include <iostream>
using namespace std;

Car::Car(string number, string mark, string color)
{
    this->number = number;
    this->mark = mark;
    this->color = color;

};

void Car::park()
{
    this->Isparked = true;
}
void Car::leave()
{
    this->Isparked = false;
}
Car::
{
    return number;
}