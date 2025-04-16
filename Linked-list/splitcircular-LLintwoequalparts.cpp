#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }

    // Function to print circular linked list starting from this node
    void print() {
        Node* temp = this;
        if (!temp) return;

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != this);
        cout << endl;
    }

    // Static method to split a circular linked list
    static void split(Node* head, Node*& head1, Node*& head2) {
        if (!head || head->next == head) {
            head1 = head;
            head2 = nullptr;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        // Tortoise and hare to find middle
        while (fast->next != head && fast->next->next != head) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Move fast one more step if even number of nodes
        if (fast->next->next == head) {
            fast = fast->next;
        }

        // Setup the two circular halves
        head1 = head;
        head2 = slow->next;

        slow->next = head1;       // Make first half circular
        fast->next = head2;       // Make second half circular
    }
};

// Helper function to create a circular linked list
Node* createCircularList(const initializer_list<int>& vals) {
    if (vals.size() == 0) return nullptr;

    auto it = vals.begin();
    Node* head = new Node(*it++);
    Node* tail = head;

    while (it != vals.end()) {
        tail->next = new Node(*it++);
        tail = tail->next;
    }

    tail->next = head; // Make it circular
    return head;
}

int main() {
    Node* head = createCircularList({1, 2, 3, 4, 5, 6});  // You can change values

    Node* head1 = nullptr;
    Node* head2 = nullptr;

    Node::split(head, head1, head2);

    cout << "First Circular Linked List: ";
    if (head1) head1->print();

    cout << "Second Circular Linked List: ";
    if (head2) head2->print();

    return 0;
}
