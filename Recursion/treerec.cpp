#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        cout << n;
        fun(n - 1);
        fun(n - 1);
    }
    return 0;
}

int main()
{
    int x = 5;
    fun(x);
    return 0;
}