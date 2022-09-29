#include <iostream>
#include "stack.h"

using namespace std;


int main()
{
    Stack Size(10);


    setlocale(LC_ALL, "Russian");
    Stack pt(10);
    Stack pt1 = pt;

    pt.Push(8);
    pt.Push(6);
    pt.Push(4);
    pt.Push(2);
    pt.Push(5);
    pt.Pop();
    pt.Pop();
    pt.Pop();
    pt.Push(7);
   
   

    cout << "верхний элемент стека  " << pt.Peek() << endl;
    cout << "размер  " << pt.size() << endl;
 

    if (pt.isEmpty()) {
        cout << "стек пустой\n";
    }
    else {
        cout << "стек полон\n";
    }

    return 0;
}
