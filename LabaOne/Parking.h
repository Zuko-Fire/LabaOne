#pragma once
#include <string>
#include "Car.h"
#include<vector>
using namespace std;
class Parking
{	
private:vector<Car>cars;
public:
	void add();
	void park(string number);
	void leave(string number);
	void chekCarisPark(string number);
	void outAllCar();

};

