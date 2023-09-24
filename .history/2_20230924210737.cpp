#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        for (int k = n - 1; k >= 1; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}