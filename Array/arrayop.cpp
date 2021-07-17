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
}

void insert(int k)
{
    if (arr.length == arr.size)
    {
        cout<<"array limit reached delete somethings"<<endl;
    }
}

void insert(int k, int pos)
{

}
void del()
{
}
void del(int x, int pos)
{
}

int main()
{
    init(10, 0, 10);
    insert(10);
    insert(20);
    del();
    return 0;
}