#pragma once
class Stack
{
    int* arr;
    int top;
    int Size;

public:
    Stack(int);
    ~Stack(); //деструктор для стека
    Stack(Stack* );

    void Push(int);
    int Pop();
    int Peek();

    int size();
    bool isEmpty();
    bool isFull();
    class stack;
};



