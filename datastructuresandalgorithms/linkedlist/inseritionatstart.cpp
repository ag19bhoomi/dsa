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

//inserting a node at start
void insertathead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
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
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node* head = node1;
    
    insertathead(head,10);

    insertathead(head,18);

    insertathead(head,14);
    print(head);

    return 0;

}