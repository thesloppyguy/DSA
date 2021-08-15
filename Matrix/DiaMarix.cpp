#include <iostream>
using namespace std;
struct Matrix
{
    int a[10];
    int n;
};

void set_matrix(Matrix *m, int i, int j, int x)
{
    if (i == j)
    {
        m->a[i - 1] = x;
    }
}

void get_matrix(Matrix *m, int i, int j)
{
    if (i == j)
    {
        cout << m->a[i - 1] << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

void display(Matrix *m)
{
    for (int i = 0; i < m->n; i++)
    {
        for (int j = 0; j < m->n; j++)
        {
            if (i == j)
            {
                cout << m->a[i];
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
    Matrix *m;
    m->n = 5;
    set_matrix(m, 1, 1, 2);
    set_matrix(m, 2, 2, 3);
    set_matrix(m, 3, 3, 4);
    set_matrix(m, 4, 4, 5);
    set_matrix(m, 5, 5, 6);
    get_matrix(m, 4, 4);
    get_matrix(m, 4, 5);
    display(m);
    return 0;
}