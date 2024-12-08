#include <iostream>
#include "sll.h"
using namespace std;


// Answer of the problem 1

int smallestKey(sll s)
{
    node *temp=s.head;
    int m=temp->data;
    while(temp!=NULL)
    {

        if(temp->data<m)
        {
            m=temp->data;
        }
        temp=temp->next;
    }
    return m;

}

//Answer of the problem 2

void deleteNeg(sll s){
     node *temp=s.head;
     int pos=0;
    while(temp!=NULL)
    {
        pos++;
        if(temp->data<0)
        {
            s.remove(pos);
            pos--;
        }
        temp=temp->next;
    }
}


//Answer of the problem 3

void delnegnext(sll s){
     node *temp=s.head;
     int pos=0;
    while(temp!=NULL)
    {
        pos++;
        if(temp->data<0)
        {
            pos++;
        if(pos-1!=s.size() && temp->next->data>0){

        s.remove(pos);

        }
        pos--;

        }
        temp=temp->next;
    }
}
//Answer of the problem 4



void deleteNegNext(sll s){
     node *temp=s.head;
     int pos=0;
    while(temp!=NULL)
    {
        pos++;
        if(temp->data<0)
        {
            pos++;
        if(pos-1!=s.size() && temp->next->data>0){

        s.remove(pos);

        }
        pos--;

        }
        temp=temp->next;
    }
}



//Answer of the problem 5
void append(sll s){
     node *temp=s.head;

     int listsize=s.size();


     for(int i=0;i<listsize;i++){

            s.create(temp->data);
            temp=temp->next;
     }
}



int main(){
    sll s;

    int menu=-1;
    while(menu!=0){

        cout<<"MENU"<<endl;
    cout<<"1.Add item"<<endl;
    cout<<"2.Find smallkey "<<endl;
    cout<<"3.Delete negetive node"<<endl;
    cout<<"4.Delete the following node of negetive"<<endl;
    cout<<"5.Append the list"<<endl;
    cout<<"6.Swap two node"<<endl;
    cout<<"7.Display the List"<<endl;
    cout<<"press 0 to exit"<<endl<<endl;
    cout<<"Enter :";


     cin>>menu;
    if(menu==0){
        break;
    }

    if(menu==1){
            int data;
    cout<<"Enter value: ";
    cin>>data;
        s.create(data);
    }


    if(menu==2){

        cout<<"The smallest key value of the list is: "<<smallestKey(s)<<endl;
    }

    if(menu==3){
    deleteNeg(s);
    cout<<"All the negetive nodes has been deleted"<<endl;

    }
    if(menu==4){
        deleteNegNext(s);
        cout<<"All the following nodes of the negetive nodes has been deleted"<<endl;
    }

    if(menu==5){
            append(s);
            cout<<"Successfully appended the list"<<endl;

    }
    if(menu==6){
            int a,b;
            cout<<"Enter a node no: ";
            cin>>a;
            cout<<"Enter another node no: ";
            cin>>b;
            s.swap(a,b);
         cout<<"Successfully swapped the nodes"<<endl;
    }

    if(menu==7){

        s.display();

    }

    if(menu<0 || menu>8)
        cout<<"Enter valid option from ( 1 - 8 )"<<endl;

    cout<<endl;
    cout<<endl;
    cout<<"----------------------------------------------------------"<<endl;
cout<<"Current List is: ";
    s.display();
    cout<<endl;
    cout<<"----------------------------------------------------------";
    cout<<endl;
    cout<<endl;


    }
    cout<<"Final List is: ";
    s.display();

}



