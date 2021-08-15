#include <iostream>
using namespace std;

class Elements
{
public:
    int i;
    int j;
    int ele;
};

class Matrix
{
private:
    int n;
    int m;
    int no_ele;
    Elements *a;

public:
    Matrix(int n, int m, int no_ele)
    {
        this->n = n;
        this->m = m;
        this->no_ele = no_ele;
        a = new Elements[this->no_ele];
    }
    void set_matrix();
    void get_matrix(int i, int j);
    void display();
    ~Matrix()
    {

        delete a;
    }
};

void Matrix::set_matrix()
{
    for (int i = 0; i < no_ele; i++)
        cin >> a[i].i >> a[i].j >> a[i].ele;
}

void Matrix::get_matrix(int i, int j)
{
    for (int k = 0; k < no_ele; k++)
    {
        if (a[k].i == i && a[k].j == j)
        {
            cout << a[k].ele << endl;
            return;
        }
    }
    cout << 0 << endl;
}

void Matrix::display()
{
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[k].i == i && a[k].j == j)
            {
                cout << a[k].ele;
                k++;
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
    Matrix m(3, 4, 5);
    m.set_matrix();
    m.get_matrix(1, 2);
    m.get_matrix(2, 2);
    m.display();
    return 0;
}