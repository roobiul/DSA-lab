#include <bits/stdc++.h>
using namespace std;
#define capacity 4
int queuee[capacity];
int frontt = -1, rear = -1;

void enque(int val)
{
    if (rear == capacity - 1)
    {
        cout << "overflow";
    }
    else if (frontt == -1 && rear == -1)
    {
        frontt++;
        rear++;
        queuee[frontt] = val;
    }
    else
    {
        rear++;
        queuee[rear] = val;
    }
}
void dequee()
{
    if (frontt == -1 && rear == -1)
    {
        cout << "underflow";
    }
    if (frontt == rear)
    {
        frontt = -1;
        rear = -1;
    }
    else
    {
        rear--;
    }
}
void display()
{
    if (frontt == -1 && rear == -1)
    {
        cout << "empty";
    }
    else
    {
        for (int i = frontt; i <= rear; i++)
        {
            cout << queuee[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    enque(10);
    enque(30);
    enque(40);
    display();
    dequee();
    display();
}