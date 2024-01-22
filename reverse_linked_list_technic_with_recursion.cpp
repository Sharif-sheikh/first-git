#include <bits/stdc++.h>
#define ll long long int

using namespace std;
const ll MOD = 1e9 + 7;

class node
{
public:
    int data;
    struct node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(node *&head, node *&tail, ll data)
{
    node *newNode = new node(data);
    if (head == NULL)
        head = newNode, tail = newNode;
    else
        tail->next = newNode, tail = newNode;
}

void printList(node *head)
{
    node *cur = head;
    while (cur != NULL)
        cout << cur->data << " ", cur = cur->next;
    cout << endl;
}

void reversePrintList(node *head)
{
    node *cur = head;
    if (cur == NULL)
        return;
    reversePrintList(cur->next);
    cout << cur->data << " ";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t, n;
    node *head = NULL, *tail = NULL;
    cout << "Enter number of nodes want to create: " << endl;
    cin >> t;
    while (t--)
    {
        cin >> n;
        insertAtTail(head, tail, n);
    }
    cout << "Print sequentially " << endl;
    printList(head);
    cout << "print Reverse" << endl;
    reversePrintList(head);
    cout << endl;
    return 0;
}