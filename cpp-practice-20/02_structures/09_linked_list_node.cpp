// Reverse a linked list. Each node is represented by a struct.
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    explicit Node(int x) : value(x), next(nullptr) {}
};

Node* reverseList(Node* head) {
    Node* previous = nullptr;
    Node* current = head;

    while (current != nullptr) {
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    return previous;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    head = reverseList(head);
    for (Node* current = head; current; current = current->next) {
        cout << current->value << ' ';
    }
    cout << '\n';

    while (head) {
        Node* nextNode = head->next;
        delete head;
        head = nextNode;
    }
}
