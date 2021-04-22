#include <iostream>
using namespace std;

int main(void)
{
	int i, j, k, n;
	cout << "n°ª ÀÔ·Â : ";
	cin >> n;

	for (k = 1; k <= n; k++)
	{
		for (i = 1; i <= n; i += 2)
			cout << "* ";
		cout << endl;
		for (i = 2; i <= n; i += 2)
			cout << " *";
		cout << endl;
	}

	return 0;
}