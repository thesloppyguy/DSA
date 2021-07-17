#include <iostream>
using namespace std;

float fact_of_n(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fact_of_n(n - 1) * n;
}

float exp(int n, int m)
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

float taylor(int x, int e)
{
    if (e == 0)
    {
        return 1;
    }
    return taylor(x, e - 1) + (exp(x, e) / fact_of_n(e));
}

float taylorshot(int x, int e)
{
    static float p = 1, f = 1;
    float r;
    if (e == 0)
    {
        return 1;
    }
    r = taylorshot(x, e - 1);
    p = p * x;
    f = f * e;
    return r + (p / f);
}

float supafasttaylor(int x, int e)
{
    static double s = 1;
    if (e == 0)
    {
        return s;
    }
    s = 1 + x * s / e;

    return supafasttaylor(x, e - 1);
}

int main()
{
    float k;
    k = taylor(1, 10);
    cout << k << endl;
    k = taylorshot(1, 10);
    cout << k << endl;
    k = supafasttaylor(1, 10);
    cout << k << endl;
    return 0;
}