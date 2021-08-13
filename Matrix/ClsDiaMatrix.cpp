#include <iostream>
using namespace std;

class Matrix
{
private:
    int *a;
    int n;

public:
    Matrix()
    {
        n = 5;
        a = new int[n];
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
    if (i == j)
    {
        a[i - 1] = x;
    }
}

void Matrix::get_matrix(int i, int j)
{
    if (i == j)
    {
        cout << a[i - 1] << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

void Matrix::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << a[i];
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

    m.set_matrix(1, 1, 2);
    m.set_matrix(2, 2, 3);
    m.set_matrix(3, 3, 4);
    m.set_matrix(4, 4, 5);
    m.set_matrix(5, 5, 6);
    m.get_matrix(4, 4);
    m.get_matrix(4, 5);
    m.display();
    return 0;
}