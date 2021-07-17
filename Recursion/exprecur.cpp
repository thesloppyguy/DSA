#include <iostream>
using namespace std;

int exp(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    if (m == 1)
    {
        return n;
    }
    if (m > 1)
    {
        return exp(n, m - 1) * n;
    }
}

int main()
{
    int k;
    k = exp(2, 5);
    cout << k << endl;
    return 0;
}