#include <iostream>
using namespace std;

class ovalArea  //ovalArea Ŭ���� ����
{
public:
	int width, height;
	ovalArea();  //�⺻ ������ ����
	ovalArea(float x, float y);  //�Ű������� �ִ� ������ ����
	int getA();  //����Լ� getA() ����
	int getB();  //����Լ� getB() ����
	void Area();  //����Լ� Area() ����
	~ovalArea();  //�Ҹ��� ����
	void set();  //����Լ� set() ����
};

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
	return width / 2;  //A�� ��ȯ
}

int ovalArea::getB()
{
	return height / 2;  //B�� ��ȯ
}

void ovalArea::Area()
{
	float pi = 3.14;
	float area = getA() * getB() * pi;

	cout << "Ÿ���� ���̴� " << area << "�̴�" << endl;
}

ovalArea::~ovalArea()  //�Ҹ��� ����
{
	cout << "Oval �Ҹ� : width = " << width  << ", height = " << height << endl;
}

void ovalArea::set()
{
	width = 10;
	height = 20;
}

int main()
{
	ovalArea a;  //a��� ��ü ����
	ovalArea b(3, 4);  //b��� ��ü ����,  x�� 3, y�� 4 ����
	a.set();
	a.Area();
	b.Area();

	return 0;
}