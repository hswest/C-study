#include <iostream>
using namespace std;

void total(int* p_total, int* p_bank)  //total �Լ� ����, ������ ���� *p_total, *p_bank ���
{
	int i = 0;
	for (i = 0; i < 4; i++)    
		*p_total += p_bank[i];  //*p_total�� �迭�� �� ����
}

int main()
{
	string bank_name[4] = { "�ϳ�","�츮","����","����" };  //���� �̸��� ���� bank_name �迭 ����
	int bank[4] = { 5000,4000,0,10 };  //���࿡ ����� �ݾ��� ���� bank �迭 ����
	int total_money = 0;

	cout << "*************************SWING �ڻ���� ����*************************" << endl;
	total(&total_money, bank);  //total_money ������ bank �迭�� ��(�� �ڻ�) ����
	cout << "���� SWING �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ��� " << total_money << "�� �Դϴ�." << endl;
	cout << "*************************SWING �ڻ���� ����*************************" << endl; 
}