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
	cout << "������� ����� ����������� ������" << endl;
	cin >> number;
	cout << "������� ����� ����������� ������" << endl;
	cin >> mark;
	cout << "������� ���� ����������� ������" << endl;
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
		cout << "����� ������ ������� � ���� ������� � ������������" << endl;
	}
	else
	{
		cout << "������ � ������� " << number << " ��� ���� � ���� ������" << endl;
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
				cout << "������ � �������: " << number << " ������� �� ��������" << endl;
				break;
			}
			else
			{
				cout << "������ ��� ������������!" << endl;
				IsPark = false;
			}
		}
	}if (IsPark == true) {
		cout << "������ � ����� ������� ��� � ����" << endl;
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
				cout << "������ c �������: "<<number<< " �������� ��������" << endl;
				break;
			}
			else
			{
				cout << "������ �� ������������!" << endl;
				IsPark = false;
			}
		}
	}
	if (IsPark == true) {
		cout << "������ � ����� ������� ��� � ����" << endl;
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
	cout << "������ � �������: " << number << " ������������" << endl;
	IsCreate = true;
	break;
}
if (cars.at(i).getIsParked() == false)
{
	cout << "������ � �������: " << number << " �� ������������" << endl;
	IsCreate = true;
	break;
}
}
}
if(IsCreate = false)
{
	cout << "������ � �������:" << number << " ��� � ����";
}
}
void Parking::outAllCar()
{
	int chek = 0;
for(int i = 0; i < cars.size();i++)
{
if (cars.at(i).getIsParked() == true)
{
	cout << "������: ���. ����� " << cars.at(i).getNumber() << ", ����� " << cars.at(i).getMark() << ", ���� " << cars.at(i).getColor() << endl;
	cout << " " << endl;
	chek++;
}
}
if (chek== 0)
{
	cout << "�������� �����!" << endl;
}
}
