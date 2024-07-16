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

void insertnode(Node* &tail, int element, int d){
    
    //empty list
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else{
        //non empty list

        Node* curr = tail;
        while(curr -> data != element){
           curr = curr -> next;
        }

        //element found
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deletenode(Node* &tail, int d){

    //empty list
    if(tail ==NULL){
        cout<<"The list is empty check again"<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != d){
            prev = curr;
            curr = curr -> next;
        }
        // element found

        prev -> next = curr -> next;

        // 1-Node LL
        if(curr == prev){
          tail == NULL;
        }

        // 2-Node LL
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool iscircular(Node* &tail){
    if(tail == NULL){
        return true;
    }

    if(tail -> next != NULL){
        return true;
    }
    else{
        Node* temp = tail -> next;
        while(temp!= NULL && temp == tail){
            temp -> next;
        }
        if(temp == NULL){
            return false;
        }
        else{
            return true;
        }
    }

}
void print(Node* &tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"Tail is empty"<<endl;
        return;
    }

    do{
        cout<< tail -> data <<" ";
        tail = tail -> next;
    }while(tail != temp);
    cout<<endl;
}


int main()
{
    Node* tail = NULL;
    
    insertnode(tail,5,13);
    print(tail);

        
    insertnode(tail,13,12);
    print(tail);

        
    insertnode(tail,12,11);
    print(tail);

        
    insertnode(tail,11,10);
    print(tail);

    //deletenode(tail,12);
    //print(tail);

    if(iscircular(tail)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;

}