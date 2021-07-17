#include <iostream>
using namespace std;

float comb(int a, int b)
{
    if (b == 0 || a == b)
    {
        return 1;
    }
    else
    {
        return comb(a - 1, b - 1) + comb(a - 1, b);
    }
}

int main()
{
    float k;
    k = comb(5, 2);
    cout << k << endl;
    return 0;
}