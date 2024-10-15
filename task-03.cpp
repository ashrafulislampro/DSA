#include <iostream>
#include <string>
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
        cout << nodes[current].name;
        current = nodes[current].next;
        if (current != 0)
        {
            cout << " -> ";
        }
    }
}

int main()
{
    Node nodes[13] = {
        {"", 0},     // Dummy node index-0 is not used
        {"Mary", 8}, // Node- 1
        {"June", 7},
        {"Barbara", 5},
        {"Paula", 9},
        {"Diana", 10},
        {"Anderson", 3},
        {"Karen", 1},
        {"Nancy", 4},
        {"Ruth", 11},
        {"Eileen", 12},
        {"Sandra", 0},
        {"Helen", 2}

    };
    int start = 6;

    // print with alphabetical order
    printList(nodes, start);
    cout << endl;
    return 0;
}