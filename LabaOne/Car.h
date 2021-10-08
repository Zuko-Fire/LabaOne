//
// Created by Zuko on 08.10.2021.
//
#include <string>
#ifndef UNTITLED_CAR_H
using namespace std;
class Car {
private: string number;
       string mark;
       string color;
       bool Isparked;
public:Car(string number, string mark, string color);
      void park();
      void leave();
      string getNumber();
      string getMark();
      string getColor();
      bool getIsParked();
};
#define UNTITLED_CAR_H


#endif //UNTITLED_CAR_H
