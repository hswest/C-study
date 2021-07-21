#include <iostream>
using namespace std;

void total(int* p_total, int* p_bank)  //total 함수 선언, 포인터 변수 *p_total, *p_bank 사용
{
	int i = 0;
	for (i = 0; i < 4; i++)    
		*p_total += p_bank[i];  //*p_total에 배열의 합 저장
}

int main()
{
	string bank_name[4] = { "하나","우리","신한","국민" };  //은행 이름을 담은 bank_name 배열 선언
	int bank[4] = { 5000,4000,0,10 };  //은행에 저장된 금액을 담은 bank 배열 선언
	int total_money = 0;

	cout << "*************************SWING 자산관리 서비스*************************" << endl;
	total(&total_money, bank);  //total_money 변수에 bank 배열의 합(총 자산) 저장
	cout << "현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은 " << total_money << "원 입니다." << endl;
	cout << "*************************SWING 자산관리 서비스*************************" << endl; 
}