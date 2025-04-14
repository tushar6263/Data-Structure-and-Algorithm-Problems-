#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    //destructor
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<val <<endl;
    }
};
// traversing a linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node *&head,Node* &tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head ,  Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head,tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last Position
    if (temp->next == NULL)
    {
        insertAtTail(head,tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position , Node* &head){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp -> next ->prev= NULL;
        head = temp ->next;
        temp-> next = NULL;
        delete temp;
    }else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt =1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        
    }
}

int main()
{
    Node *node1 = new Node(14);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    cout << getLength(head) << endl;
    insertAtHead(head,tail, 12);
    print(head);

    insertAtTail(head,tail, 15);
    print(head);

    insertAtPosition(tail, head, 2, 13);
    print(head);
    insertAtPosition(tail, head, 5, 16);
    print(head);
    insertAtHead(head,tail, 11);
    print(head);
    insertAtTail(head,tail, 17);
    print(head);
    insertAtPosition(tail, head, 8, 18);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(4,head);
    print(head);
    deleteNode(6,head);
    print(head);
}