#include <iostream>
#include <string>
using namespace std;  //std:: ���� ����

int main()  //C++�� ǥ�� ���� Ÿ���� int
{
	cout << "����� �̸��� �����Դϱ�?";  //cout&<< : ����� �� ���
	string name; //�̸� �Է�, ũ�� ��� ����
	getline(cin, name);  
	cout << "�ݰ����ϴ�." << name << "��" << endl; //�̸� ���
	int apple_price;
	cout << "apple�� ������ ���Դϱ�?"; //apple ���� �Է� �ޱ�
	cin >> apple_price;  //cin&>> : �Է��� �� ���
	int banana_price;
	cout << "banana�� ������ ���Դϱ�?"; //banana ���� �Է� �ޱ�
	cin >> banana_price;
	int orange_price;
	cout << "orange�� ������ ���Դϱ�?"; //orange ���� �Է� �ޱ�
	cin >> orange_price;
	int num_apple;
	cout << "apple�� �� �� �ֽ��ϱ�?";  //apple ���� �Է� �ޱ�
	cin >> num_apple;
	int num_banana;
	cout << "banana�� �� �� �ֽ��ϱ�?";  //banana ���� �Է� �ޱ�
	cin >> num_banana;
	int num_orange;
	cout << "orange�� �� �� �ֽ��ϱ�?";  // orange ���� �Է� �ޱ�
	cin >> num_orange; 
	int price;
	price = apple_price * num_apple + banana_price * num_banana + orange_price * num_orange - 500; //�� �ݾ� ���, 500�� ����
	cout << "��" << price << "�� �Դϴ�." << endl; //�� �ݾ� ���
	return 0;  //return ����Ǹ� main() ����, ���α׷� ����
}