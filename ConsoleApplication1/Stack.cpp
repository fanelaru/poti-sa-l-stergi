#include <iostream>
#define MAX 1000

class Stack
{
private:
    int _top;
public:
    int a[MAX];

    Stack() { _top = -1; }
    bool push(int x);
    int Pop();
    int Peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (_top >= (MAX - 1))
    {
        std::cout << "Stack overflow\n";
        return false;
    }
    else
    {
        a[++_top] = x;
        std::cout << "push in the stack\n";
        return true;
    }
}

bool Stack::isEmpty()
{
    if (_top < 0)
    {
        std::cout << "stack is empty\n";
        return true;
    }
    else
    {
        std::cout << "Stack is not empty\n";
        return false;
    }
}

int Stack::Pop()
{
    if (!isEmpty())
    {
        int x = a[_top--];
        return x;
    }
    else
    {
        // e cam aiurea...
        return false;
    }
}

int Stack::Peek()
{
    if (_top < 0) {
        std::cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[_top];
        return x;
    }
}
