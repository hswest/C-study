#include <iostream>
using namespace std;

int main(void)
{
	int num;
	int row;
	int col;
	int a[3][10] = { 0 };
	int i, k;

	do
	{
		cout << "�¼��� �����Ͻðڽ��ϱ�? (1 �Ǵ� 0)";
		cin >> num;

		if (num == 1)
		{
			cout << endl;
			cout << "������ �¼��� ������ �����ϴ�" << endl;
			cout << "---------------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "---------------------------------------" << endl;
			for (i = 0; i < 3; i++)
			{
				for (k = 0; k < 10; k++)
				{
					cout << a[i][k] << " ";
				}
				cout << endl;
			}
			cout << endl;

			cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�?" << endl;
			row = 0;
			col = 0;
			cin >> row >> col;
			cout << endl;
			
			if (a[row - 1][col - 1] == 0)
			{
				cout << "����Ǿ����ϴ�." << endl;
				cout << "---------------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "---------------------------------------" << endl;

				a[row - 1][col - 1] = 1;
				for (i = 0; i < 3; i++)
				{
					for (k = 0; k < 10; k++)
					{
						cout << a[i][k] << " ";
					}
					cout << endl;
				}
			}
			
			else
			{
				cout << "�̹� ����� �ڸ��Դϴ�." << endl;
			}
			continue;
		}

		else if (num == 0)
		{
			cout << endl;
			cout << "�¼� ���� ����" << endl;
			break;
		}

		else
		{
			cout << endl;
			cout << "1�� �Ǵ� 0���� �Է��ϼ���" << endl;
			continue;
		}
	} while (num != 0);
	
	return 0;
}