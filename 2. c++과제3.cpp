#include <iostream>
using namespace std;

int main(void)
{
	int a = 10;
	int* ptr = &a;

	cout << "���� a�� �ּҴ� : " << ptr << endl;
	cout << "a�� ���� : " << *ptr << endl;
}