#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};


void printLL(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void insertAtEnd(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        head = tail = new node(data);
    }
    else
    {
        node *n = new node(data);
        tail->next = n;
        tail = n;
    }
}

bool solve(node* &head, node* &tail, int key)
{
    node* temp = head;
    while (temp)
    {
        if (temp->data == key) return true;

        temp = temp->next;
    }

    insertAtEnd(head, tail, key);
    return false;
}


int main()
{
    node *head, *tail;
    head = tail = NULL;

    int temp;
    cin >> temp;

    while (temp != (-1))
    {
        bool ans = solve(head, tail, temp);
        if (ans) break;
        cin >> temp;
    }

    printLL(head);

    return 0;
}