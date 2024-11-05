#include <bits/stdc++.h>
using namespace std;

#define MAX 6
int arr[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek()
{
    return arr[front];
}
int size()
{
    return itemCount;
}

bool isFull()
{
    return itemCount == MAX;
}
bool isEmpty()
{
    return itemCount == 0;
}

void insert(int data)
{
    if (!isFull())
    {
        if (rear == MAX - 1)
        {
            rear = -1;
        }
        arr[++rear] = data;
        itemCount++;
    }
}
int removeData()
{
    int num = arr[front++];
    if (front == MAX)
    {
        front = 0;
    }
    itemCount--;
    return num;
}

int main()
{
    insert(44);
    insert(55);
    insert(40);
    insert(64);
    insert(74);
    insert(84);

    cout << "Top Element = " << peek() << endl;
    cout << "Size of Queue = " << size() << endl;
    if (isFull())
    {
        cout << "Queue is full" << endl;
    }

    int del = removeData();
    cout << "Delete Data = " << del << endl;
    cout << "Top Element = " << peek() << endl;
    cout << "Size of Queue = " << size() << endl;
    insert(100);
    insert(200);
    cout << "Top Element = " << peek() << endl;
    cout << "Size of Queue = " << size() << endl;
    while(!isEmpty()){
        int nu = removeData();
        cout<<"Remove Data = "<<nu<<endl;
    }
    return 0;
}