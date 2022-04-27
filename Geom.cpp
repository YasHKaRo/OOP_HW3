#include "Geom.h"
//Круг
void Circle::S()
{
	cout << "S = " << this->GetPI() * pow(this->R, 2) << endl;
}
void Circle::Color()
{
	cout << "RGB: " << endl;
	cout << "Red:" << this->GetRed() << "\t Green:" << this->GetGreen() << "\t Blue:" << this->GetBlue() << endl;
}
void Circle::Coordinates()
{
	int i, j;
	cout << "Введите координаты (x;y): " << endl;
	cin >> i;
	cin >> j;
	this->SetX(i);
	this->SetY(j);
	cout << "Координаты центра круга: (" << this->GetX() << ";" << this->GetY() << ")" << endl;
}


//Вектор
void Vector::Lenght()
{
	int k1, k2;
	cout << "Введите координаты начала вектора (x;y): ";
	cin >> k1;
	cin >> k2;
	this->SetX1(k1);
	this->SetY1(k2);
	cout << "Введите координаты конца вектора (x;y): ";
	cin >> k1;
	cin >> k2;
	this->SetX2(k1);
	this->SetY2(k2);
	cout << "Длинна вектора: " << sqrt(pow(this->GetX2() - this->GetX1(), 2) + pow(this->GetY2() - this->GetY1(), 2)) << endl;
}
