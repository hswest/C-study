#include <iostream>
using namespace std;
int main()
{
    int M, N;
    int min, sum = 0;
    cin >> M >> N;
    min = N;

    for (int i = M; i <= N; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                if (i == 2)
                {
                    min = 2;
                    sum += 2;
                }
                break;
            }
            else
            {
                if (j == i - 1)
                {
                    if (i < min)
                        min = i;
                    sum += i;
                }
            }
        }
    }

    if (sum == 0)
        cout << -1;

    else
    {
        cout << sum << endl;
        cout << min << endl;
    }

    return 0;
}