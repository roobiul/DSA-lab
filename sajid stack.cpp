#include <bits/stdc++.h>
using namespace std;
#define capacity 4 // stack er range
int stackk[capacity];
int top = -1;
void push(int value)
{
    if (top == capacity - 1)
    {
        cout << "overflow" << endl;
    }
    else
    {
        top++;
        stackk[top] = value;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "underflow" << endl;
    }
    else
    {
        top--;
    }
}
void display()
{
    for (int i = 0; i <= top; i++)
    {
        cout << stackk[i] << " ";
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40); // push r ekta nile overflow hobe

    display();
    pop();
    pop();
    cout << endl
         << "after using pop" << endl;
    display();
}
