#include <iostream>
using namespace std;

struct node
{
    int data;
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
void pop()
{
    cout << top->data << endl;
    node *temp;
    temp = new node();
    temp = top;
    top = temp->next;
    temp->next = NULL;
    free(temp);
}

void display()
{
    node *temp;
    temp = new node();
    temp = top;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    display();
    pop();
    pop();
    display();
    return 0;
}
