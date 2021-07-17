#include <iostream>
using namespace std;

int sum_of_n(int n)
{
    if (n > 0)
    {
        return sum_of_n(n - 1) + n;
    }
    return 0;
}

int main()
{
    int k;
    k = sum_of_n(77);
    cout << k << endl;
    return 0;
}