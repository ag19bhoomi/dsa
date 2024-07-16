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

    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for Node with data "<<  val <<endl;
    }
};

//inserting a node at start
void insertathead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void deletenode(int pos, Node* &head,Node* &tail){
    if(pos==0){
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }

    Node* temp = tail;
    if(temp -> next == NULL){
        Node* curr = head;
        Node* pre =  NULL;

        int cnt = 1;
        while(cnt <= pos){
            pre = curr;
            curr = curr -> next;
            cnt++;
        }
        tail = pre;
        pre -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
    

    else{
        Node* curr = head;
        Node* pre =  NULL;

        int cnt = 1;
        while(cnt <= pos){
            pre = curr;
            curr = curr -> next;
            cnt++;
        }
        pre -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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
    Node* head = node1;
    Node* tail = node1;
    
    insertathead(head,10);
    insertathead(head,18);
    insertathead(head,14);

    print(head);

    deletenode(3,head,tail);
    print(head);

    cout<<"head -> "<<head -> data<<endl;
    cout<<"tail -> "<< tail -> data<<endl;

    return 0;

}