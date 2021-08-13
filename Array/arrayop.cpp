#include <iostream>
using namespace std;

struct Array
{
    int *p;
    int size;
    int length;
} arr;

void init(int x, int y, int z)
{
    arr.p = new int(x);
    arr.length = y;
    arr.size = z;
    for (int i = 0; i < arr.size; i++)
    {
        arr.p[i] = '\0';
    }
}

void insert(int k)
{
    if (arr.length == arr.size)
    {
        cout << "array limit reached delete somethings" << endl;
    }
    else
    {
        cout << "inserted" << k << endl;
        arr.p[arr.length] = k;
        arr.length++;
    }
}

void insert(int k, int pos)
{
    if (arr.length == arr.size)
    {
        cout << "array limit reached delete somethings" << endl;
    }
    else if (arr.p[pos - 1] == '\0')
    {
        cout << "inserted" << k << endl;
        arr.p[pos - 1] = k;
        arr.length++;
    }
    else
    {
        for (int i = arr.size - 2; i >= pos; i--)
        {
            arr.p[i + 1] = arr.p[i];
        }
        cout << "inserted" << k << endl;
        arr.p[pos - 1] = k;
        arr.length++;
    }
}

void del()
{
    if (arr.length = 0)
    {
        cout << "array is empty" << endl;
        return;
    }
    int i = arr.size - 1;
    while (arr.p[i] == '\0')
    {
        i--;
    }
    cout << "deleted element " << arr.p[i] << " pos :" << i + 1 << endl;
    arr.p[i] = '\0';
    arr.length--;
}

void del(int pos)
{
    if (arr.p[pos - 1] == '\0')
    {
        cout << "index already empty" << endl;
        return;
    }
    cout << "deleted element " << arr.p[pos - 1] << " pos :" << pos << endl;
    arr.p[pos - 1] == '\0';
    arr.length--;
}

void display()
{
    if (arr.length == 0)
    {
        cout << "the array is empty" << endl;
        return;
    }
    else
    {
        for (int i = 0; i != arr.size; i++)
        {
            if (arr.p[i] != '\0')
            {
                cout << arr.p[i] << " :" << i + 1 << endl;
            }
        }
    }
}

int main()
{
    init(10, 0, 10);
    insert(10);
    insert(20);
    insert(30, 5);
    display();
    del();
    del(10);
    display();
    return 0;
}