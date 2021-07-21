#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class SWINGmember
{
private:
	int kisu;  //기수
	char *name;  //이름,  포인터 변수->오류 발생
public:
	SWINGmember() {};  //매개변수 없는 생성자
	SWINGmember(int n, const char *name);  //매개변수 있는 생성자
	~SWINGmember();  //소멸자
	void info();  //기수, 이름 출력
	void changeName(const char* name);  //이름 바꾸는 함수
};

SWINGmember::SWINGmember(int n, const char *name)
{
	cout << "매개변수 있는 생성자 실행" << endl;
	kisu = n;
	this->name = new char[7];
	strcpy(this->name, name);
}

SWINGmember::~SWINGmember()
{
	cout << name << " 소멸(소멸자 실행)" << endl;
	delete[] name;
}

void SWINGmember::info()
{
	cout << "SWING " << kisu << "기 " << name << endl;
}

void SWINGmember::changeName(const char* name)
{
	strcpy(this->name, name);
}

int main()
{
	SWINGmember a(29, "피카츄");
	SWINGmember b(a);
	a.info();
	b.info();
	b.changeName("라이츄");
	return 0; 
}