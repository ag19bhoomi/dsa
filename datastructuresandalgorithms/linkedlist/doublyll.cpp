#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this-> prev=NULL;
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
void insertathead(Node* &tail,Node* &head,int d){

    //empty head
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}

//inserting a node at last
void insertattail(Node* &tail,Node* &head,int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head= temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp -> prev = tail;
    tail = temp;
    }
}

void insertatposition(Node* &head,int pos,int d,Node* &tail){

    //at 1st position
    if(pos == 1){
        insertathead(tail,head,d);
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
        insertattail(tail,head,d);
        return;
    }

    //creating a node for d
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert; 
    nodetoinsert ->prev  = temp;

    
}

void deletenode(int pos, Node* &head,Node* &tail){
    if(pos == 0){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp -> next = NULL;
        delete temp;
    }
    Node* temp = tail;
    if(temp -> next == NULL){
        Node* curr = head;
        Node* pre =  NULL;

        int cnt =1;
        while(cnt <= pos){
            pre = curr;
            curr = curr -> next;
            cnt++;
        }
        tail = curr -> prev;
        curr -> prev = NULL;
        pre -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
    else{
        Node* curr = head;
        Node* pre =  NULL;

        int cnt =1;
        while(cnt <= pos){
            pre = curr;
            curr = curr -> next;
            cnt++;
        }
        
        curr -> prev = NULL;
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

//lenght of LL 
int getlenght(Node* head){
    Node* temp = head;
    int len =0;
    while(temp!=NULL){
       len++;
        temp = temp->next;
    }
   return len;
}

int main()
{
   
    Node* head = NULL;
    Node* tail = NULL;
    
    insertathead(tail,head,10);
    print(head);

    insertathead(tail,head,18);
    print(head);

    insertathead(tail,head,14);
    print(head);

    insertattail(tail,head,12);
    print(head);

    insertatposition(head,4,58,tail);
    print(head);

    deletenode(4,head,tail);
    print(head);

    cout<<"head -> "<<head -> data<<endl;
    cout<<"tail -> "<< tail -> data<<endl;


    cout<<"Lenght of LL: "<<getlenght(head)<<endl;

    return 0;

}