#include <iostream>
using namespace std;

int main() 
{
    int burger[3];
    int drink[2];
    int min_burger = 9999;
    int min_drink = 9999;

    for (int i = 0; i < 3; i++)
    {
        cin >> burger[i];
        if (burger[i] < min_burger)
            min_burger = burger[i];
    }
    
    for (int i = 0; i < 2; i++)
    {
        cin >> drink[i];
        if (drink[i] < min_drink)
            min_drink = drink[i];
    }

    cout << min_burger + min_drink - 50 << endl;

    return 0;
}