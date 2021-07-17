#include <iostream>
using namespace std;

int fun2(int x);
int fun1(int x);

int fun3(int x)
{
    if (x > 0)
    {
        cout << x;
        fun1(x - 1);
    }
    return 0;
}

int fun2(int x)
{
    if (x > 0)
    {
        cout << x;
        fun3(x - 1);
    }
    return 0;
}

int fun1(int x)
{
    if (x > 0)
    {
        cout << x;
        fun2(x - 1);
    }
    return 0;
}

int main()
{
    int r = 5;
    fun1(r);
    return 0;
}