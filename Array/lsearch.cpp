#include <iostream>
using namespace std;

int search(int a[], int s)
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == s)
        {
            if (i != 0)
            {
                int temp = a[0];
                a[0] = a[i];
                a[i] = temp;
            }
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int k;

    k = search(a, 5);
    cout << k << endl;
    return 0;
}