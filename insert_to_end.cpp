#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

struct node
{
    string name;
    int next;
};

int main()
{
    struct node *newnode, *temp;
    
    int head = 5;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter your input data: ");
    scanf("%s", newnode->name);
    newnode = 0;
    temp = head;
    while(temp->next != 0){
        temp = temp->next;
    }
    newnode->next = temp;

    return 0;
}