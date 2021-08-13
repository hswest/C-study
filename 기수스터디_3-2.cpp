#include <iostream>
using namespace std;

long a[90];

int main()
{
	a[0] = 0;
	a[1] = 1;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		a[i + 2] = a[i + 1] + a[i];

	cout << a[n] << endl;
	return 0;
}
