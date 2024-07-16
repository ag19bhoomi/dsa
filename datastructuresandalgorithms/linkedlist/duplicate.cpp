#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* removeDuplicates(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    unordered_map<int, bool> visited;
    
    while (curr != NULL) {
        if (!visited[curr->data]) {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        } else {
            prev->next = curr->next;
            delete curr;
        }
        curr = prev->next;
    }
    return head;
}

// Helper function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Helper function to insert a new node at the end of the list
Node* insertNode(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        return newNode;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main() {
    Node* head = NULL;
    head = insertNode(head, 1);
    head = insertNode(head, 2);
    head = insertNode(head, 2);
    head = insertNode(head, 3);
    head = insertNode(head, 4);
    head = insertNode(head, 4);
    head = insertNode(head, 5);

    cout << "Original list: ";
    printList(head);

    head = removeDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(head);
    
    cout<<endl;
    return 0;
}
