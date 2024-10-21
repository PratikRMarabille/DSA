#include<bits/stdc++.h>

using namespace std;


class Node{
public:
    int data;
    Node* next;

    Node(int data){

        this->data=data;
        this->next=NULL;
    }


};

class linkedList{
    private:
        Node* head;
public:
    linkedList(){head=NULL;}

    void insert(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }

        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=newNode;
    }

    void  print(){

    if(head==NULL){
        cout<<"list is empty"<<endl;
        return ;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};



int main(){
   linkedList list;
//    list.insert(1);
//    list.insert(3);
//    list.insert(4);
//    list.insert(5);
//    list.insert(6);
//    list.print();
   for(int i=1;i<=6;i++){
    list.insert(i);
   }
   list.print();


    
    



    return 0;
}