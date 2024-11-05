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

bool isEmpty()
{
    return itemCount == 0;
}
bool isFull()
{
    return itemCount == MAX;
}
int size()
{
    return itemCount;
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
    int data = arr[front++];
    if (front == MAX)
    {
        front = 0;
    }
    itemCount--;
    return data;
}

int main()
{
    insert(3);
    insert(43);
    insert(33);
    insert(23);
    insert(13);
    // insert(15);

    if (isFull())
    {
        cout << "Queue is full" << endl;
    }

    int num = removeData();
    cout << "Element Remove = " << num << endl;
    insert(60);
    // In this moment the queue is full
    insert(17);
    insert(18);
    cout << "Element of the front = " << peek() << endl;

    while (!isEmpty())
    {
        int n = removeData();
        cout << "Remove Data = " << n << endl;
    }
    return 0;
}