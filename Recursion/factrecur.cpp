#include <iostream>
using namespace std;

int fact_of_n(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fact_of_n(n - 1) * n;
}

int main()
{
    int k;
    k = fact_of_n(9);
    cout << k << endl;
    return 0;
}