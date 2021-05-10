#include <iostream>
using namespace std;

int main(void)
{
	int a = 10;
	int* ptr = &a;

	cout << "변수 A의 주소는 : " << ptr << endl;
	cout << "a의 값은 : " << *ptr << endl;
}
