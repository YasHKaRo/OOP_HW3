#include "Geom.h"
//����
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
	cout << "������� ���������� (x;y): " << endl;
	cin >> i;
	cin >> j;
	this->SetX(i);
	this->SetY(j);
	cout << "���������� ������ �����: (" << this->GetX() << ";" << this->GetY() << ")" << endl;
}


//������
void Vector::Lenght()
{
	int k1, k2;
	cout << "������� ���������� ������ ������� (x;y): ";
	cin >> k1;
	cin >> k2;
	this->SetX1(k1);
	this->SetY1(k2);
	cout << "������� ���������� ����� ������� (x;y): ";
	cin >> k1;
	cin >> k2;
	this->SetX2(k1);
	this->SetY2(k2);
	cout << "������ �������: " << sqrt(pow(this->GetX2() - this->GetX1(), 2) + pow(this->GetY2() - this->GetY1(), 2)) << endl;
}
