#include <iostream>
#include <cstring>
using namespace std;

// Define a structure for the linked list node
struct Node
{
    char name[20];
    int link;
};

void printList(Node nodes[], int start)
{
    int current = start;
    while (current != 0)
    {
        cout << nodes[current].name << " -> ";
        current = nodes[current].link;
    }
    cout << "NULL" << endl;
}

int main()
{
    // Initialize the linked list array
    Node nodes[13] = {
        {"", 0},         // Dummy node (0-index not used)
        {"Kirk", 7},     // Node 1
        {"", 0},         // Node 2
        {"Dean", 11},    // Node 3
        {"Maxwell", 12}, // Node 4
        {"Adams", 3},    // Node 5
        {"", 0},         // Node 6
        {"Lane", 4},     // Node 7
        {"Green", 1},    // Node 8
        {"Samuels", 0},  // Node 9
        {"", 0},         // Node 10 Unused node (will be Walters)
        {"Fields", 8},   // Node 11
        {"Nelson", 9},   // Node 12
                         //
                         // Unused node (Dean -> Fields)
                         // Unused node (Maxwell -> Nelson)
    };

    int start = 5; // Start node is Adams (index 4)

    cout << "Initial List: ";
    printList(nodes, start);

    // Step 1: Adding "Walters" to the list alphabetically
    strcpy(nodes[10].name, "Walters");
    nodes[10].link = 0; // Walters is at the end

    nodes[9].link = 10; // Nelson -> Walters

    cout << "After Adding Walters: ";
    printList(nodes, start);

    // Step 2: Deleting "Kirk" from the list
    nodes[8].link = nodes[1].link; // Green -> Lane (skipping Kirk)

    cout << "After Deleting Kirk: ";
    printList(nodes, start);

    return 0;
}
