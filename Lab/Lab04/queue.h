#include <iostream>
//#include "node.h"
#include"stack.h"
using namespace std;

class Queue
{
public:
    node *frnt=NULL,*ptr,*temp,*rear;


    //enqueue function

    void enQ(int a)
    {
        ptr=new node(a);
        if(frnt==NULL)
        {
            frnt=ptr;
            rear=ptr;
        }
        else
        {
            temp=frnt;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            rear=ptr;
        }
    }


    //dequeue function

    void deQ()
    {
        temp=frnt;
        frnt=frnt->next;
        delete temp;
    }


    //size function

    int size()
    {
        int s=0;
        temp=frnt;
        while(temp!=NULL)
        {
            s++;
            temp=temp->next;
        }
        return s;
    }


    //isEmpty function

    bool isempty()
    {
        if(frnt==NULL)
            return true;
        else
            return false;
    }


    //distroy function

    void distroy()
    {
        temp=frnt;

        while(temp!=NULL)
        {
            deQ();

            temp=temp->next;
        }
    }

    //top data function

    int topd()
    {

        return frnt->data;

    }


    //top address function


    node* topa()
    {
        return frnt;
    }


    //copy queue function

    void copyQ(Queue *q1)
    {
        int n=size();
        Queue *temp=new Queue();

        for(int i=0; i<n; i++)
        {
            temp->enQ(topd());
            deQ();
        }
        for(int i=0; i<n; i++)
        {
            q1->enQ(temp->topd());
            enQ(temp->topd());
            temp->deQ();
        }



    }

    //negetive delete function

    void deleteNegetive()
    {
        int n=size();
        Queue *temp=new Queue();

        for(int i=0; i<n; i++)
        {
            temp->enQ(topd());
            deQ();
        }
        for(int i=0; i<n; i++)
        {
            if(temp->topd()>0)
                enQ(temp->topd());
            temp->deQ();


        }



    }

    //grouping data in queues fuction

    void CategorizedGroupQ()
    {
        int n=size();
        Queue *q1=new Queue();
        Queue *q2=new Queue();
        Queue *q3=new Queue();
        Queue *q4=new Queue();
        for(int i=0; i<n; i++)
        {
            if(topd()<18)
            {
                q1->enQ(topd());
                deQ();
            }
            else if(topd()>17 && topd()<36)
            {
                q2->enQ(topd());
                deQ();
            }
            else if(topd()>35 && topd()<46)
            {
                q3->enQ(topd());
                deQ();
            }
            else if(topd()>46)
            {
                q4->enQ(topd());
                deQ();
            }
        }

        cout<<"Group 1: ";
        q1->display();
        cout<<endl;
        cout<<"Group 2: ";
        q2->display();
        cout<<endl;
        cout<<"Group 3: ";
        q3->display();
        cout<<endl;
        cout<<"Group 4: ";
        q4->display();
        cout<<endl;

    }


    //reversing queue function

    void reverseQ()
    {
        int s=size();
        stack *st=new stack();

        for(int i=0; i<s; i++)
        {
            st->push(topd());
            deQ();

        }
        for(int i=0; i<s; i++)
        {
            enQ(st->topd());
            st->pop();

        }


    }

    // stack to queue fuction

    void StackToQ(stack *st)
    {

        int s=st->size();
        for(int i=0; i<s; i++)
        {
            enQ(st->topd());
            st->pop();
        }
    }


    //queue to stack function

    void QtoStack(stack *st)
    {
        int s=size();
        Queue *temp=new Queue();
        for(int i=0; i<s; i++)
        {
            temp->enQ(topd());
            deQ();
        }
        for(int i=0; i<s; i++)
        {
            st->push(temp->topd());
            enQ(temp->topd());
            temp->deQ();
        }

        st->reverseStack();
    }


    //display function

    void display()
    {
        temp=frnt;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};
