#include <iostream>
using namespace std;
//only doing the lower matrix here no need to do both upper and lower
class Matrix
{
private:
    int *a;
    int n;

public:
    Matrix()
    {
        n = 5;
        a = new int[(n(n + 1)) / 2];
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