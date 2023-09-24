#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        for (int i = n - 1; i >= 1; i--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}