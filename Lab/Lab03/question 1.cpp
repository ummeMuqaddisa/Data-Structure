#include<iostream>
#include "stack.h"
using namespace std;

int main(){

 stack *s=new stack();



    int m=-1;
    while(m!=0){

        cout<<"MENU"<<endl;
    cout<<"1.Push data"<<endl;
    cout<<"2.Pop data"<<endl;
    cout<<"3.Size of the stack"<<endl;
    cout<<"4.check Isempty"<<endl;
    cout<<"5.Distroy the whole stack"<<endl;
    cout<<"6.Top data"<<endl;
    cout<<"7.Display stack"<<endl;
    cout<<"press 0 to exit"<<endl<<endl;
    cout<<"Enter choice: ";

    cin>>m;
    if(m==0){
        break;
    }

    if(m==1){
            int d;
    cout<<"Enter the value: ";
    cin>>d;
        s->push(d);
    }
     else if(m==2){
        s->pop();
    }
    else if(m==3){
        cout<<"Size of the stack is: "<<s->size();
    }
    else if(m==4){
        if(s->isempty()){
            cout<<"There is no data in the Stack";
        }
        else
            cout<<"There is data available in the stack";
    }
    else if(m==5){
        s->distroy();
    }
     else if(m==6){

        cout<<"The top data the stack is: "<<s->topd();

    }
    else if(m==7){

        cout<<"Current Stack is: "<<endl;
        s->display();

    }



    if(m<0 || m>8)
        cout<<endl<<"Invalid Option"<<endl;


    cout<<endl;

    cout<<"Current Stack is: "<<endl;
    s->display();

    cout<<endl;
    }
    cout<<"Final Stack is: "<<endl;
    s->display();
    }
