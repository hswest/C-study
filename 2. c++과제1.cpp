#include <iostream>
using namespace std;

int main(void)
{
	int num;  //1 또는 0
	int row;  //열
	int col;  //행
	int a[3][10] = { 0 };  //배열 초기화
	int i, k;

	do
	{
		cout << "좌석을 예약하시겠습니까? (1 또는 0)";
		cin >> num;

		if (num == 1)
		{
			cout << endl;
			cout << "현재의 좌석은 다음과 같습니다" << endl;
			cout << "---------------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "---------------------------------------" << endl;
			for (i = 0; i < 3; i++)
			{
				for (k = 0; k < 10; k++)
				{
					cout << a[i][k] << " ";  //배열 출력
				}
				cout << endl;
			}
			cout << endl;

			cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?" << endl;
			row = 0;
			col = 0;
			cin >> row >> col;  //예약할 좌석 입력
			cout << endl;
			
			if (a[row - 1][col - 1] == 0)  //입력한 좌석이 빈 좌석인 경우
			{
				cout << "예약되었습니다." << endl;
				cout << "---------------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "---------------------------------------" << endl;

				a[row - 1][col - 1] = 1;  //예약할 자리를 1로 변경
				for (i = 0; i < 3; i++)
				{
					for (k = 0; k < 10; k++)
					{
						cout << a[i][k] << " ";  //배열 출력
					}
					cout << endl;
				}
			}
			
			else  //입력한 좌석이 이미 예약된 좌석인 경우
			{
				cout << "이미 예약된 자리입니다." << endl;
			}
			continue;
		}

		else if (num == 0) 
		{
			cout << endl;
			cout << "좌석 예약 종료" << endl;
			break;
		}

		else  //1 또는 0 이외의 숫자를 입력한 경우
		{
			cout << endl;
			cout << "1번 또는 0번만 입력하세요" << endl;
			continue;
		}
	} while (num != 0);  //0을 입력할 때까지 반복
	
	return 0;
}
