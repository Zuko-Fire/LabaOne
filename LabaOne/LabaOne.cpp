#include <iostream>
#include <Windows.h>
#include <locale>
#include <string>
#include "Car.h"
#include"Parking.h"
//#include<Vld.h>
using namespace std;
int main() {
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    Parking parking;
    while (true) {
        int i = 0;
        cout << "1.Внести новую машину в базу данных парковки, и припорковать" << endl;
        cout << "2.Припорковать машину имеющиюся в базе" << endl;
        cout << "3.Выезд машины с парковки" << endl;
        cout << "4.Проверить припаркована ли машина" << endl;
        cout << "5.Вывести все припаркованные машины" << endl;
        cout << "6.Завершить работу программы" << endl;
        cin >> i;
        switch (i)
        {
        case(1):
        {
            parking.add();
            break;
        }
        case(2): {
            cout << "Введите номер машины" << endl;
            string number;
            cin >> number;
            parking.park(number);
            break;
        }
        case(3): 
        {
            cout << "Введите номер машины" << endl;
            string number;
            cin >> number;
            parking.leave(number);
            break;
        }
        case(4):
        {
            cout << "Введите номер машины" << endl;
            string number;
            cin >> number;
            parking.chekCarisPark(number);
            break;
        }
        case(5):
        {
            parking.outAllCar();
            break;
        }
        case(6):
            return 0;
        }
    
}
    
    
}
