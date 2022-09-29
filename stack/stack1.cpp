#include <iostream>
#include "stack.h"

using namespace std;


    Stack::Stack(int size)
    {
        arr = new int[];
        Size = size;
        top = -1;
    }
    Stack::~Stack() {
        delete[] arr; //очистка памяти
    }

    Stack::Stack(Stack*)
    {
        arr = Stack.arr;
       int Size = Stack.Size;
        int top = Stack.top;

    }

    bool Stack::isEmpty() {
        return top == -1;
    }

    bool Stack::isFull() {
        return top == Size - 1;
    }

    void Stack::Push(int x)
    {
        if (isFull())
        {
            cout << "переполнен\n";
        }

        cout << "" << x << endl;
        arr[++top] = x;
    }

    int Stack::Pop()
    {

        if (isEmpty())
        {
            cout << "пусто.............\n";
        }

        cout << Peek() << endl;

        return arr[top--];
    }

    int Stack::Peek()
    {
        if (!isEmpty()) {
            return arr[top];

        }

    }

    int Stack::size() {
        return top + 1;
    }
