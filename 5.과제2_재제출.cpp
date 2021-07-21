#include <iostream>
using namespace std;

class VendingMachine
{
private:
	string name; // ���� �̸�
	int price; // ����
	int total = 0; // ���� �ջ� ��
public:
	VendingMachine() {}; // ������
	void purchase(double v1);
	void menu();
	void upgrademenu();
	string getName();
	double getPrice();
	double getTotal();
	void setName(string n);
	void setPrice(int p);
	void setTotal(int t);
	int returngap = 200; // ���Ǳ� �ʱ� ���� �Ž�����(100��¥��) ����
	string add_name;
	void add();
};
int add_price;

void VendingMachine::purchase(double v1)
{
	int bill;
	cout << "�� �ݾ� : " << getTotal() << endl;
	cout << "���� �Է��ϼ��� : ";
	cin >> bill;
	do
	{
		if (getTotal() == bill)
		{
			cout << "�Ž������� �����ϴ�. �ȳ���������" << endl;
			cout << "��⿡ ���� �Ž�����(100�� ����) : " << returngap << endl;
			break;
		}
		else if (getTotal() > bill)
		{
			cout << "�ݾ��� �����մϴ�. �ٽ� �־��ּ���.";
			cin >> bill;
			continue;
		}
		else
		{
			if (bill - getTotal() <= returngap * 100)
			{
				cout << "�Ž������Դϴ�." << endl;
				cout << "100�� : " << (bill - getTotal()) / 100 << "��" << endl;
				cout << "��⿡ ���� �Ž�����(100�� ����) : " << returngap - (bill - getTotal()) / 100 << endl;
				break;
			}
			else
			{
				cout << "�Ž������Դϴ�." << endl;
				cout << "��⳻�� �ܵ��� �����մϴ�. 010-0000-0000���� �����ּ���" << endl;
				cout << "��⿡ ���� �Ž�����(100�� ����) : 0" << endl;
				break;
			}
		}
	} while (1);
}

void VendingMachine::menu()
{
	VendingMachine namearray[3];
	namearray[0].setName("��ī�ݶ�");
	namearray[1].setName("ĥ�� ���̴�");
	namearray[2].setName("�̿��� ȭ�̹�");

	VendingMachine* pn;
	pn = namearray;

	VendingMachine pricearray[3];
	pricearray[0].setPrice(1200);
	pricearray[1].setPrice(1400);
	pricearray[2].setPrice(1800);

	VendingMachine* pp;
	pp = pricearray;

	cout << "============SWING ���Ǳ�===========" << endl;

	for (int i = 1; i < 4; i++)
	{
		cout << i << ". " << (*pn++).getName() << " : " << (*pp++).getPrice() << endl;
	}

	cout << "4. �غ���" << endl;
	cout << "5. ���" << endl;
	cout << "6. ����" << endl;
}

void VendingMachine::upgrademenu()
{
	VendingMachine namearray[4];
	namearray[0].setName("��ī�ݶ�");
	namearray[1].setName("ĥ�� ���̴�");
	namearray[2].setName("�̿��� ȭ�̹�");
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

	cout << "============SWING ���Ǳ�===========" << endl;

	for (int i = 1; i < 5; i++)
	{
		cout << i << ". " << (*pn++).getName() << " : " << (*pp++).getPrice() << endl;
	}

	cout << "5. ���" << endl;
	cout << "6. ����" << endl;
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
	cout << "�߰��� ���� �̸��� �Է����ּ��� : ";
	cin >> add_name;
	cout << "�Ǹ��� ������ �Է��ϼ��� : ";
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
		cout << "��ȣ�� �������ּ��� : ";
		cin >> num;
		if (num == 1)
		{
			cout << "������ ������ �Է����ּ��� : ";
			cin >> n1;
		}
		else if (num == 2)
		{
			cout << "������ ������ �Է����ּ��� : ";
			cin >> n2;
		}
		else if (num == 3)
		{
			cout << "������ ������ �Է����ּ��� : ";
			cin >> n3;
		}
		else if (num == 4)
		{
			cout << "������ ������ �Է����ּ��� : ";
			cin >> n4;
		}
		else if (num == 5)
		{
			cout << "��� ���Դϴ�. ��ٷ��ּ��� . . . ." << endl << endl;
			v.setTotal(1200 * n1 + 1400 * n2 + 1800 * n3 + add_price * n4);
			v.purchase(1);
		}
		else
		{
			break;
		}
	} while (num != 6);
}