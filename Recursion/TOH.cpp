#include <iostream>
using namespace std;

void TOH(int n, char from, char dest, char aux)
{
    if (n == 1)
    {
        cout << "move ring " << n << " from " << from << " to " << dest << endl;
        return;
    }
    TOH(n - 1, from, aux, dest);
    cout << "move ring " << n << " from " << from << " to " << dest << endl;
    TOH(n - 1, aux, dest, from);
}

int main()
{
    TOH(2, 'A', 'C', 'B');
    return 0;
}