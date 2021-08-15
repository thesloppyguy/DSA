#include <iostream>
using namespace std;
//only doing the lower matrix here no need to do both upper and lower
class Matrix
{
public:
    int *a;
    int n;

public:
    Matrix()
    {
        n = 3;
        a = new int[3 * n - 2];
    }
    void set_matrix(int i, int j, int x);
    void get_matrix(int i, int j);
    void display();
    ~Matrix()
    {
        delete a;
    }
};

void Matrix::set_matrix(int i, int j, int x)
{
    if (i - j == 1)
    {
        a[i - 2] = x;
    }
    else if (i - j == 0)
    {
        a[n + i - 2] = x;
    }
    else if (i - j == -1)
    {
        a[2 * n + i - 2] = x;
    }
    else
    {
        cout << "Wrong Input" << endl;
    }
}

void Matrix::get_matrix(int i, int j)
{
    if (i - j == 1)
    {
        cout << a[i - 2] << endl;
    }
    else if (i - j == 0)
    {
        cout << a[n + i - 2] << endl;
    }
    else if (i - j == -1)
    {
        cout << a[2 * n + i - 2] << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

void Matrix::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i - j == 1)
            {
                cout << a[i - 2];
            }
            else if (i - j == 0)
            {
                cout << a[n + i - 2];
            }
            else if (i - j == -1)
            {
                cout << a[2 * n + i - 2];
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}

int main()
{
    Matrix m;
    m.set_matrix(1, 1, 1);
    m.set_matrix(2, 2, 2);
    m.set_matrix(3, 3, 3);
    m.set_matrix(1, 2, 8);
    m.set_matrix(2, 3, 6);
    m.set_matrix(2, 1, 4);
    m.set_matrix(3, 2, 5);
    m.get_matrix(1, 2);
    m.get_matrix(1, 3);
    m.display();
}