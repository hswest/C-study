#include <iostream>
#include <memory>
using namespace std;

class Test
{
public:
	char* name;
	int grade;

	void printINFO()
	{
		cout << "�̸�" << name << endl;
		cout << "�г�" << grade << endl;
	}

	Test()
	{
		cout << "������ ȣ��" << endl;
	}

	Test(const Test& _Value)
	{
		cout << "���� ������ ȣ��" << endl;
		int len = strlen(_Value.name);
		this->name = new char[len + 1];
		strcpy(this->name, _Value.name);
		this->grade = _Value.grade;
	}

	~Test()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main()
{
	Test A;
	A.name = new char[4];
	strcpy_s(A.name, 4, "SWU");
	A.grade = 1;

	A.printINFO();

	Test B = A;

	cout << "B = A ���� A�� ������ �����ϸ�?" << endl;

	strcpy_s(A.name, 6, "SWUNI");
	A.grade = 3;

	A.printINFO();
	B.printINFO();
}