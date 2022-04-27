#ifndef GEOM_H
#define GEOM_H

#include<iostream>
#include<math.h>
#include<string>
using namespace std;

class Circle
{
private:
	int x;
	int y;
	int R;
	
	int Red = rand() % 256;
	int Green = rand() % 256;
	int Blue = rand() % 256;
public:
	const double PI = 3.1415926535;
	Circle(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		R = 10;
	}
	int GetRed()
	{
		return Red;
	}
	int GetGreen()
	{
		return Green;
	}
	int GetBlue()
	{
		return Blue;
	}
	double GetPI()
	{
		return PI;
	}
	

	void SetX(int x)
	{
		this->x = x;

	}
	void SetY(int valueY)
	{
		y = valueY;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void Coordinates();
	void Color();
	void S();
};


class Vector
{
public:
	Vector(int valueX, int valueY)
	{
		x1 = valueX;
		y1 = valueY;
	}
	void SetX1(int x1)
	{
		this->x1 = x1;

	}
	void SetX2(int valueX2)
	{
		x2 = valueX2;
	}
	int GetX1()
	{
		return x1;
	}
	int GetX2()
	{
		return x2;
	}
	void SetY1(int y1)
	{
		this->y1 = y1;

	}
	void SetY2(int valueY2)
	{
		y2 = valueY2;
	}
	int GetY1()
	{
		return y1;
	}
	int GetY2()
	{
		return y2;
	}
	void Lenght();

private:
	int x1, x2, y1, y2;
};


#endif