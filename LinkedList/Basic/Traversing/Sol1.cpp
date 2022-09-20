#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *next;
    int value;
};
void LLTraversing(struct node *head);
void InsertNodeBegin(node **head, int element);

int main()
{
    node *head = NULL;
    InsertNodeBegin(&head, 20);
    InsertNodeBegin(&head, 30);
    InsertNodeBegin(&head, 300);
    InsertNodeBegin(&head, 3000);
    LLTraversing(head);
}

void InsertNodeBegin(node **head, int element)
{
    node *new_node = new node();
    if (head == NULL)
    {
        new_node->value = element;
        new_node->next = NULL;
        *head = new_node;
        return;
    }
    new_node->value = element;
    new_node->next = *head;
    *head = new_node;
}
void LLTraversing(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;
}