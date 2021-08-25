#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    int k, n;
    cin >> k;
    stack<int> a;

    for (int i = 0; i < k; i++) 
    {
        cin >> n;
        if (n != 0) 
            a.push(n);
        else 
            a.pop();
    }

    int sum = 0;
    int size = a.size();
    for (int i = 0; i < size; i++) 
    {
        sum += a.top();
        a.pop();
    }
    cout << sum;

    return 0;
}