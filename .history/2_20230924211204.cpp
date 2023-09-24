#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = n - 1; k >= 1; i--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}