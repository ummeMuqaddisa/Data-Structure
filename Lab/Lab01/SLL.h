#include <iostream>
#include"node.h"

using namespace std;
class sll
{
    public:
    node *head=NULL,*ptr,*temp;



// 1st operation of sll function

    void create(int a)
    {
        ptr=new node(a);
        if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
        }
    }


// 2nd operation of sll function

    void addBegin(int a){
         ptr=new node(a);
        if(head==NULL)
    {
        head=ptr;
    }
    else{
        temp=head;
        head=ptr;
        ptr->next=temp;
    }
    }

// 3rd operation of sll function

    void addAnyPos(int a,int b){
    ptr=new node(b);
    node *temp=head;
    if(head==NULL)
    {
        head=ptr;
    }
    else if(a<2){
        temp=head;
        head=ptr;
        ptr->next=temp;
    }
    else{
    for(int i=2;i<a;i++){
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    }
    }


// 4th operation of sll function

    bool contains(int a){
        node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data==a){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

// 5th operation of sll function
    int size(){
        int lsize=0;
     node *temp=head;
        while(temp!=NULL)
        {
           lsize++;
            temp=temp->next;
        }
        return lsize;
    }




// 6th operation of sll function

    bool isEmpty(){
    if(head==NULL){
        return true;
    }
    else
        return false;
    }



// 7th operation of sll function

    int get(int a){
        temp=head;
        for(int i=1;i<a;i++){
        temp=temp->next;
    }
    return temp->data;
    }

// 8th operation of sll function

    int indexof(int a){
        temp=head;
        int t=0;
        for(int i=1;i<size();i++){
                if(a==temp->data){

                    cout<<"The indexs of data are: "<<i<<endl;
                    t++;
                }
        temp=temp->next;
    }
    if(t!=0)
        return 1;
    else
    return 0;
    }


// 9th operation of sll function

    void removeFirst(){
    node *temp=head;
    head=temp->next;

    }


// 10th operation of sll function

    void removeLast(){
         node *temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next->data=NULL;
        temp->next=NULL;

    }

// 11th operation of sll function

    void remove(int a){
    node *temp=head;
    node *tempp=NULL;

    if(head==NULL)
    {
        isEmpty();
    }
    else if(a<2){
        //cout<<"Data of the pos-"<<a<<" is = "<<temp->data<<endl;
        removeFirst();
    }
    else if(a==size()){
        for(int i=1;i<size();i++){
        tempp=temp;
        temp=temp->next;
    }
        //cout<<"Data of the pos-"<<a<<" is = "<<temp->data<<endl;
        removeLast();
    }
    else{
    for(int i=1;i<a;i++){
        tempp=temp;
        temp=temp->next;
    }
    //cout<<"Data of the pos-"<<a<<" is = "<<temp->data<<endl;
    tempp->next=temp->next;
    delete temp;


    }
    }



// 12th operation of sll function

    void reverse(){
        for(int i=1;i<size();i++)
            {
                int tem;
                temp=head;
                for(int j=i;j<size();j++){

                    {
                    tem=temp->data;
                    temp->data=temp->next->data;
                    temp->next->data=tem;
                }
                temp=temp->next;
                }
            }
    }




// 13th operation of sll function

    void sort(){

           for(int i=1;i<size();i++)
            {
                int tem;
                temp=head;
                for(int j=i;j<size();j++){

                    if(temp->data > temp->next->data){
                    tem=temp->data;
                    temp->data=temp->next->data;
                    temp->next->data=tem;
                }
                temp=temp->next;
                }
            }


    }



    //swap function of problem 5 in lab 3


    void swap(int a, int b){
    int x,y;
    if(a<=size() && b<=size()){
        x=get(a);
        y=get(b);

        temp=head;
        for(int i=1;i<=size();i++){
                if(i==a){
                    temp->data=y;
                }
                else if(i==b){
                    temp->data=x;
                }
            temp=temp->next;
        }
    }

}








// 14th operation of sll function

    void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<", ";
            temp=temp->next;
        }
    }
};
