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
        n = 3;
        a = new int[((n * (n + 1)) / 2)];
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
    if (j <= i)
    {
        a[i * (i - 1) / 2 + j - 1] = x;
    }
    else
    {
        cout << "Wrong Input" << endl;
    }
}

void Matrix::get_matrix(int i, int j)
{
    if (j <= i)
    {
        cout << a[i * (i - 1) / 2 + j - 1] << endl;
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
            if (j <= i)
            {
                cout << a[i * (i - 1) / 2 + j - 1] << "\t";
            }
            else
            {
                cout << 0 << "\t";
            }
        }
        cout << endl;
    }
}

int main()
{
    Matrix m;
    m.set_matrix(1, 1, 1);
    m.set_matrix(2, 1, 2);
    m.set_matrix(2, 2, 3);
    m.set_matrix(3, 1, 4);
    m.set_matrix(3, 2, 5);
    m.set_matrix(3, 3, 6);
    m.set_matrix(1, 3, 8);
    m.get_matrix(1, 1);
    m.get_matrix(1, 2);
    m.display();
}
// output
// Wrong Input
// 1
// 0
// 1       0       0
// 2       3       0
// 4       5       6

// Formula Derivation :
// Each row has number of elements equal to its row number
// Therfore to skip n rows we have to skip n(n-1)/2 elements
// And add j-1 to it to go to the desired column (j-1 as j starts from 1)
