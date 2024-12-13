#include <iostream>
#include "node.h"
using namespace std;

class stack{
 public:
    node *top=NULL ,*ptr,*temp;


//push function

    void push(int a)
    {
        ptr=new node(a);
        if(top==NULL)
    {
        top=ptr;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
    }


    //pop function

    void pop(){
        temp=top;
        top=top->next;
        delete temp;
    }

    //size function


    int size(){
    int count=0;
    temp=top;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
    }

    //isEmpty function


    bool isempty(){
    if(top==NULL)
        return true;
    else
        return false;
    }

    //distroy function

    void distroy(){
    temp=top;

    while(temp!=NULL){
        pop();

        temp=temp->next;
    }
    }

    //top data function

    int topd(){

        return top->data;

    }

    //top adress function

    node* topa(){
        return top;
    }


    //display function

    void display(){
    temp=top;
   while(temp!=NULL){
        cout<<temp->data<<" ";
        cout<<endl;
        temp=temp->next;
    }
    }

    //display for binary function


    void displaybinary(){
    temp=top;
   while(temp!=NULL){
        cout<<temp->data;

        temp=temp->next;
    }
    }
};
