//Лабораторна робота №1.1
//Яшиної Світлани
//Варіант 13
///              Triangle.h      // заголовний файл – визначення класу     /////////////////////////
#pragma once 

class Triangle
{
private:
	double first, second;
	
public:
	double GetFirst() const { return first; }      // методи доступу (константні методи зчитування та методи запису) для кожного поля;
	
	
	
	double GetSecond() const { return second; } 
	
	bool Init(double, double);     // метод ініціалізації Init(); метод має контролювати значення аргументів на коректність;
	void Read();                       // метод введення з клавіатури Read( );
	void Display() const;              // метод виведення на екран Display().

	double hypotenuse()  const;       

};

#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;
bool Triangle::Init(double x, double y)  //коректність змінних .
{
	if (x>0 && y>0)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}
void Triangle::Read()
{
	double x, y;
	do
	{
		cout << "Input valid value:" << endl;
		cout << " catet a= "; cin >> x;
		cout << " catet b = "; cin >> y;
	} while (!Init(x, y));
}
void Triangle::Display() const
{
	cout << endl;
	cout << " catet a = " << first << endl;
	cout << " catet b = " << second << endl;
}
double Triangle::hypotenuse() const                                ///знаходимо гіпотенузу;
{
	return sqrt(first * first + second * second);
}
#include "Complex.h"
#include <iostream>
#include "MyClass.h"
using namespace std;
Triangle findHypotenuse(double x, double y)
{
	Triangle c;
	if (!c.Init(x, y))                                 //перевірка на коректність гіпотенузи
		cout << "Wrong arguments to Init!" << endl;
	return c;                                    // повертаємо гіпотенузу
}
int main()
{
	Triangle c;
	c.Read();
	c.Display();
	cout << " hypotenuse c = " << c.hypotenuse() << endl;
	double x, y;
	cout << "Input valid value:" << endl;
	cout << " catet a = "; cin >> x;
	cout << " catet b = "; cin >> y;
	c = findHypotenuse(x, y);
	c.Display();
	cout << "hypotenuse c = " <<c.hypotenuse() << endl;
	cin.get();
	return 0;
}