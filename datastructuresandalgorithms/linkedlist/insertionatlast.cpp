#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//inserting a node at last
void insertattail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

//traversing LL
void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main()
{
    Node* node1 = new Node(15);
    
    Node* tail = node1;
    Node* head = node1;
    
    insertattail(tail,10);
    
    insertattail(tail,18);
    
    insertattail(tail,14);
    print(head);

    return 0;

}