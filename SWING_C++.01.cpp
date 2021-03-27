#include <iostream>
#include <string>
using namespace std;  //std:: 생략 가능

int main()  //C++의 표준 리턴 타입은 int
{
	cout << "당신의 이름은 무엇입니까?";  //cout&<< : 출력할 때 사용
	string name; //이름 입력, 크기 상관 없음
	getline(cin, name);  
	cout << "반갑습니다." << name << "님" << endl; //이름 출력
	int apple_price;
	cout << "apple의 가격은 얼마입니까?"; //apple 가격 입력 받기
	cin >> apple_price;  //cin&>> : 입력할 때 사용
	int banana_price;
	cout << "banana의 가격은 얼마입니까?"; //banana 가격 입력 받기
	cin >> banana_price;
	int orange_price;
	cout << "orange의 가격은 얼마입니까?"; //orange 가격 입력 받기
	cin >> orange_price;
	int num_apple;
	cout << "apple은 몇 개 있습니까?";  //apple 개수 입력 받기
	cin >> num_apple;
	int num_banana;
	cout << "banana는 몇 개 있습니까?";  //banana 개수 입력 받기
	cin >> num_banana;
	int num_orange;
	cout << "orange는 몇 개 있습니까?";  // orange 개수 입력 받기
	cin >> num_orange; 
	int price;
	price = apple_price * num_apple + banana_price * num_banana + orange_price * num_orange - 500; //총 금액 계산, 500원 할인
	cout << "총" << price << "원 입니다." << endl; //총 금액 출력
	return 0;  //return 실행되면 main() 종료, 프로그램 종료
}