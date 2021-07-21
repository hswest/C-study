#include <iostream>
using namespace std;

#include "ovalArea.h"

ovalArea::ovalArea()
{
	set();
}

ovalArea::ovalArea(float x, float y)
{
	width = x;
	height = y;
}

int ovalArea::getA()
{
	return width / 2;  
}

int ovalArea::getB()
{
	return height / 2;  
}

void ovalArea::Area()
{
	float pi = 3.14;
	float area = getA() * getB() * pi;

	cout << "타원의 넓이는 " << area << "이다" << endl;
}

ovalArea::~ovalArea() 
{
	cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}

void ovalArea::set()
{
	width = 10;
	height = 20;
}