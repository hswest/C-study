#include <iostream>
using namespace std;

class VendingMachine
{
private:
	string name; // 음료 이름
	int price; // 가격
	int total = 0; // 음료 합산 값
public:
	VendingMachine() {}; // 생성자
	void purchase(double v1);
	void menu();
	void upgrademenu();
	string getName();
	double getPrice();
	double getTotal();
	void setName(string n);
	void setPrice(int p);
	void setTotal(int t);
	int returngap = 200; // 자판기 초기 내부 거스름돈(100원짜리) 개수
	string add_name;
	void add();
};
int add_price;

void VendingMachine::purchase(double v1)
{
	int bill;
	cout << "총 금액 : " << getTotal() << endl;
	cout << "지폐를 입력하세요 : ";
	cin >> bill;
	do
	{
		if (getTotal() == bill)
		{
			cout << "거스름돈이 없습니다. 안녕히가세요" << endl;
			cout << "기기에 남은 거스름돈(100원 개수) : " << returngap << endl;
			break;
		}
		else if (getTotal() > bill)
		{
			cout << "금액이 부족합니다. 다시 넣어주세요.";
			cin >> bill;
			continue;
		}
		else
		{
			if (bill - getTotal() <= returngap * 100)
			{
				cout << "거스름돈입니다." << endl;
				cout << "100원 : " << (bill - getTotal()) / 100 << "개" << endl;
				cout << "기기에 남은 거스름돈(100원 개수) : " << returngap - (bill - getTotal()) / 100 << endl;
				break;
			}
			else
			{
				cout << "거스름돈입니다." << endl;
				cout << "기기내의 잔돈이 부족합니다. 010-0000-0000으로 연락주세요" << endl;
				cout << "기기에 남은 거스름돈(100원 개수) : 0" << endl;
				break;
			}
		}
	} while (1);
}

void VendingMachine::menu()
{
	VendingMachine namearray[3];
	namearray[0].setName("코카콜라");
	namearray[1].setName("칠성 사이다");
	namearray[2].setName("미에로 화이바");

	VendingMachine* pn;
	pn = namearray;

	VendingMachine pricearray[3];
	pricearray[0].setPrice(1200);
	pricearray[1].setPrice(1400);
	pricearray[2].setPrice(1800);

	VendingMachine* pp;
	pp = pricearray;

	cout << "============SWING 자판기===========" << endl;

	for (int i = 1; i < 4; i++)
	{
		cout << i << ". " << (*pn++).getName() << " : " << (*pp++).getPrice() << endl;
	}

	cout << "4. 준비중" << endl;
	cout << "5. 계산" << endl;
	cout << "6. 종료" << endl;
}

void VendingMachine::upgrademenu()
{
	VendingMachine namearray[4];
	namearray[0].setName("코카콜라");
	namearray[1].setName("칠성 사이다");
	namearray[2].setName("미에로 화이바");
	namearray[3].setName(add_name);

	VendingMachine* pn;
	pn = namearray;

	VendingMachine pricearray[4];
	pricearray[0].setPrice(1200);
	pricearray[1].setPrice(1400);
	pricearray[2].setPrice(1800);
	pricearray[3].setPrice(add_price);

	VendingMachine* pp;
	pp = pricearray;

	cout << "============SWING 자판기===========" << endl;

	for (int i = 1; i < 5; i++)
	{
		cout << i << ". " << (*pn++).getName() << " : " << (*pp++).getPrice() << endl;
	}

	cout << "5. 계산" << endl;
	cout << "6. 종료" << endl;
}

string VendingMachine::getName()
{
	return name;
}

double VendingMachine::getPrice()
{
	return price;
}

double VendingMachine::getTotal()
{
	return total;
}

void VendingMachine::setName(string n)
{
	name = n;
}

void VendingMachine::setPrice(int p)
{
	price = p;
}

void VendingMachine::setTotal(int t)
{
	total = t;
}

void VendingMachine::add()
{
	cout << "추가할 음료 이름을 입력해주세요 : ";
	cin >> add_name;
	cout << "판매할 가격을 입력하세요 : ";
	cin >> add_price;
}

int main()
{
	VendingMachine v;
	v.menu();
	v.add();
	
	int num;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	do
	{
		v.upgrademenu();
		cout << "번호를 선택해주세요 : ";
		cin >> num;
		if (num == 1)
		{
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> n1;
		}
		else if (num == 2)
		{
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> n2;
		}
		else if (num == 3)
		{
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> n3;
		}
		else if (num == 4)
		{
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> n4;
		}
		else if (num == 5)
		{
			cout << "계산 중입니다. 기다려주세요 . . . ." << endl << endl;
			v.setTotal(1200 * n1 + 1400 * n2 + 1800 * n3 + add_price * n4);
			v.purchase(1);
		}
		else
		{
			break;
		}
	} while (num != 6);
}