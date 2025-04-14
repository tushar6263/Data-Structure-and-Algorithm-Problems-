#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
               delete next;
               this->next =NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};

// Function to insert at head
void insertAtHead(Node *&head, int d)
{
    // Create a new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Function to insert at tail
void insertAtTail(Node *&tail, int d)
{
    // Create a new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Function to print the linked list
void Print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node* &tail ,Node *&head, int position, int d)
{
    //insert at start
    if(position==1){
        insertAtHead(head,d);
        return;
    }


    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position,Node* &head , Node* &tail){
    //deleting first or start node
    if(position==1){
        Node* temp = head;
        head = head ->next;
        //memory free start node
        temp ->next =  NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while (cnt < position){
         prev = curr;
         curr =  curr -> next;
         cnt++;
        }
        if(curr-> next == NULL){
            tail = prev;
        }
     prev->next = curr ->next;
     curr -> next = NULL;
     delete curr;
        
    }
}

int main()
{
    // Created a new node
    Node *node1 = new Node(10);

    // Head and tail point to node1
    Node *head = node1;
    Node *tail = node1;

    // Print initial linked list
    Print(head);

    // Insert nodes at the tail
    insertAtTail(tail, 12);
    Print(head);

    insertAtTail(tail, 15);
    Print(head);

    insertAtPosition(tail,head,4,22);
    Print(head);

    cout<<"Head " <<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    deleteNode(4,head,tail);
    Print(head);
    cout<<"Head " <<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    return 0;
}