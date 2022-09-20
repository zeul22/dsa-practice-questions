#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *next;
    int value;
};
void LLTraversing(struct node *head);
void InsertNodeAtEnd(node **head, int element);

int main()
{
    node *head = NULL;
    InsertNodeAtEnd(&head, 20);
    InsertNodeAtEnd(&head, 30);
    InsertNodeAtEnd(&head, 300);
    InsertNodeAtEnd(&head, 3000);
    LLTraversing(head);
}
void InsertNodeAtEnd(node **head, int element)
{
    node *new_node = new node();
    node *last = *head;
    new_node->value = element;
    if (head == NULL)
    {

        *head = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
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