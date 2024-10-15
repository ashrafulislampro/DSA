#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

struct Node
{
    string name;
    int next;
};

void printList(Node nodes[], int start)
{
    int current = start;
    while (current != 0)
    {
        cout << nodes[current].name << " -> ";
        current = nodes[current].next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node nodes[21] = {
        {"", 0},     // Dummy node not used index-0
        {"Vito", 4}, // Node 1
        {"", 0},
        {"Hunter", 14},
        {"Katz", 0},
        {"", 0},
        {"Evans", 0},
        {"", 0},
        {"Rogers", 15},
        {"Teller", 10},
        {"Jones", 19},
        {"", 0},
        {"Grant", 17},
        {"", 0},
        {"McBride", 6},
        {"Weston", 0},
        {"", 0},
        {"Scott", 1},
        {"", 0},
        {"Adams", 8},
        {"", 0} // Node 20

    };

    int head = 9, pos;
    Node newnode;
    cout << "Enter the position where u want to insert the new node: ";
    cin >> pos;

    if (pos < 1 || pos >= 21)
    {
        cout << "Invalid position" << endl;
        return 1;
    }

    cout << "Enter your data: ";
    cin >> newnode.name;

    newnode.next = head;
    nodes[pos] = newnode;
    head = pos;

    

    // all list item
    printList(nodes, head);

    return 0;
}