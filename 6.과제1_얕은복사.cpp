#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class SWINGmember
{
private:
	int kisu;  //���
	char *name;  //�̸�,  ������ ����->���� �߻�
public:
	SWINGmember() {};  //�Ű����� ���� ������
	SWINGmember(int n, const char *name);  //�Ű����� �ִ� ������
	~SWINGmember();  //�Ҹ���
	void info();  //���, �̸� ���
	void changeName(const char* name);  //�̸� �ٲٴ� �Լ�
};

SWINGmember::SWINGmember(int n, const char *name)
{
	cout << "�Ű����� �ִ� ������ ����" << endl;
	kisu = n;
	this->name = new char[7];
	strcpy(this->name, name);
}

SWINGmember::~SWINGmember()
{
	cout << name << " �Ҹ�(�Ҹ��� ����)" << endl;
	delete[] name;
}

void SWINGmember::info()
{
	cout << "SWING " << kisu << "�� " << name << endl;
}

void SWINGmember::changeName(const char* name)
{
	strcpy(this->name, name);
}

int main()
{
	SWINGmember a(29, "��ī��");
	SWINGmember b(a);
	a.info();
	b.info();
	b.changeName("������");
	return 0; 
}