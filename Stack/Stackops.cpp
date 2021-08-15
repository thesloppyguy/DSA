#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int max;
    int *ele;

public:
    Stack(int max)
    {
        top = -1;
        this->max = max;
        ele = new int(this->max);
    }
    void push();
    void pop();
    void peek(int i);
    void Stacktop();
    void isFull();
    void isEmpty();
    ~Stack()
    {
        delete ele;
    }
};

void Stack::push()
{
    if (top == max)
    {
        cout << "OVERFLOW" << endl;
    }
    else
        cin >> ele[++top];
}

void Stack::pop()
{
    if (top == -1)
    {
        cout << "UNDERFLOW" << endl;
    }
    else
    {
        cout << ele[top];
        --top;
    }
}
void Stack::peek(int i)
{
    if (top > i - 12)
    {
        cout << ele[i - 1] << endl;
    }
    else
    {
        cout << "no element on this index" << endl;
    }
}
void Stack::Stacktop()
{
    if (top != -1)
        cout << ele[top] << endl;
    else
        cout << "UNDERFLOW" << endl;
}

void Stack::isFull()
{
    if (top == max)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        cout << "stack is not full" << endl;
    }
}

void Stack::isEmpty()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
}

int main()
{
    Stack s(5);
    s.isEmpty();
    s.isFull();
    s.push();
    s.push();
    s.peek(1);
    s.pop();
    return 0;
}