#include <iostream>
using namespace std;

struct node
{
    char data;
    node *next;
} *top = NULL;

void push(int i)
{

    node *temp;
    temp = new node();
    temp->data = i;
    temp->next = top;
    top = temp;
}
int pop()
{
    if (top != NULL)
    {
        cout << top->data << endl;
        node *temp;
        temp = new node();
        temp = top;
        top = temp->next;
        temp->next = NULL;
        free(temp);
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{

    return 0;
}
