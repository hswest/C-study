#include <iostream>
using namespace std;

class ovalArea  //ovalArea 클래스 생성
{
public:
	int width, height;
	ovalArea();  //기본 생성자 선언
	ovalArea(float x, float y);  //매개변수가 있는 생성자 선언
	int getA();  //멤버함수 getA() 선언
	int getB();  //멤버함수 getB() 선언
	void Area();  //멤버함수 Area() 선언
	~ovalArea();  //소멸자 선언
	void set();  //멤버함수 set() 선언
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
	return width / 2;  //A값 반환
}

int ovalArea::getB()
{
	return height / 2;  //B값 반환
}

void ovalArea::Area()
{
	float pi = 3.14;
	float area = getA() * getB() * pi;

	cout << "타원의 넓이는 " << area << "이다" << endl;
}

ovalArea::~ovalArea()  //소멸자 구현
{
	cout << "Oval 소멸 : width = " << width  << ", height = " << height << endl;
}

void ovalArea::set()
{
	width = 10;
	height = 20;
}

int main()
{
	ovalArea a;  //a라는 객체 생성
	ovalArea b(3, 4);  //b라는 객체 생성,  x에 3, y에 4 전달
	a.set();
	a.Area();
	b.Area();

	return 0;
}