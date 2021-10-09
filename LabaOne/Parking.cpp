#include<iostream>
#include "Parking.h"
#include"Car.h"
#include<string>
#include<locale>
#include<Windows.h>
using namespace std;
void Parking::add()
{
	string number, mark, color;
	cout << "Введите номер паркующейся машины" << endl;
	cin >> number;
	cout << "Введите марку паркующейся машины" << endl;
	cin >> mark;
	cout << "Введите цвет паркующейся машины" << endl;
	cin >> color;
	bool IsCreate = false;
	for (int i = 0; i< cars.size();i++)
	{
		if (cars.at(i).getNumber() == number)
		{
			IsCreate = true;
		};
	}
	if (IsCreate == false)
	{
		Car car1(number, mark, color);
		car1.park();
		cars.push_back(car1);
		cout << "Новая машина внесена в базу данныйх и припаркована" << endl;
	}
	else
	{
		cout << "Машина с номером " << number << " уже есть в базе данных" << endl;
	}
}
void Parking::park(string number)
{
	bool IsPark = true;
	
	for (int i = 0; i < cars.size(); i++)
	{
		if (cars.at(i).getNumber() == number)
		{
			if (cars.at(i).getIsParked() == false)
			{
				cars.at(i).park();
				IsPark = false;
				cout << "Машина с номером: " << number << " заехала на парковку" << endl;
				break;
			}
			else
			{
				cout << "Машина уже припаркована!" << endl;
				IsPark = false;
			}
		}
	}if (IsPark == true) {
		cout << "Машины с таким номером нет в базе" << endl;
	}
		
	
}
void Parking::leave(string number)
{
	bool IsPark = true;

	for (int i = 0; i < cars.size(); i++)
	{
		if (cars.at(i).getNumber() == number)
		{
			if (cars.at(i).getIsParked() == true)
			{
				cars.at(i).leave();
				IsPark = false;
				cout << "Машина c номером: "<<number<< " покинула парковку" << endl;
				break;
			}
			else
			{
				cout << "Машина не припаркована!" << endl;
				IsPark = false;
			}
		}
	}
	if (IsPark == true) {
		cout << "Машины с таким номером нет в базе" << endl;
	}


}
void Parking::chekCarisPark(string number)
{
	bool IsCreate = false;
for (int i = 0; i <cars.size();i++)
{
if(cars.at(i).getNumber() == number)
{
if(cars.at(i).getIsParked() == true)
{
	cout << "Машина с номером: " << number << " припаркована" << endl;
	IsCreate = true;
	break;
}
if (cars.at(i).getIsParked() == false)
{
	cout << "Машина с номером: " << number << " не припаркована" << endl;
	IsCreate = true;
	break;
}
}
}
if(IsCreate = false)
{
	cout << "Машины с номером:" << number << " нет в базе";
}
}
void Parking::outAllCar()
{
	int chek = 0;
for(int i = 0; i < cars.size();i++)
{
if (cars.at(i).getIsParked() == true)
{
	cout << "Машина: гос. номер " << cars.at(i).getNumber() << ", Марка " << cars.at(i).getMark() << ", Цвет " << cars.at(i).getColor() << endl;
	cout << " " << endl;
	chek++;
}
}
if (chek== 0)
{
	cout << "Парковка пуста!" << endl;
}
}
