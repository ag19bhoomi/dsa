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

//inserting a node at last
void insertattail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node* &head,int pos,int d,Node* &tail){

    //at 1st position
    if(pos == 1){
        insertathead(head,d);
        return;
    }

   
    Node* temp = head;
    int cnt = 1;
 
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }

    //at last position
    if(temp -> next == NULL){
        insertattail(tail,d);
        return;
    }

    //creating a node for d
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;

    
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
    Node* tail = node1;
    
    insertathead(head,10);
    

    insertatposition(head,3,48,tail);

    insertatposition(head,4,52,tail);

    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    return 0;

}