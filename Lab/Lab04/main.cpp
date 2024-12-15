#include<iostream>
#include "queue.h"
using namespace std;



int main()
{


    Queue *q=new Queue();
    stack *s=new stack();


    int m=-1;
    while(m!=0)
    {

        cout<<"MENU"<<endl;
        cout<<"------"<<endl;
        cout<<"1.Enqueue Data"<<endl;
        cout<<"2.Dequeue Data"<<endl;
        cout<<"3.Size of the queue"<<endl;
        cout<<"4.Isempty checking"<<endl;
        cout<<"5.Distroy queue"<<endl;
        cout<<"6.Front Data"<<endl;
        cout<<"7.Copy Queue"<<endl;
        cout<<"8.Group Queue"<<endl;
        cout<<"9.delete negetive values from Queue"<<endl;
        cout<<"10.Stack to Queue"<<endl;
        cout<<"11.Reverse the Queue"<<endl;
        cout<<"12.Queue to Stack"<<endl;
        cout<<"13.Display stack"<<endl;
        cout<<"press 0 to exit"<<endl<<endl;
        cout<<"Enter choice: ";

        cin>>m;
        if(m==0)
        {
            break;
        }

        if(m==1)
        {
            int d;
            cout<<"Enter the value: ";
            cin>>d;
            q->enQ(d);
        }
        else if(m==2)
        {
            q->deQ();
        }
        else if(m==3)
        {
            cout<<"Size of the stack is: "<<q->size();
        }
        else if(m==4)
        {
            if(q->isempty())
            {
                cout<<"There is no data in the Stack";
            }
            else
                cout<<"There is data available in the stack";
        }
        else if(m==5)
        {
            q->distroy();
        }
        else if(m==6)
        {

            cout<<"The top data the stack is: "<<q->topd();

        }

        else if(m==7)
        {
            Queue *q2=new Queue();
            cout<<"before copy: "<<endl;
            cout<<"Queue 1: "<<endl;
            q->display();
            cout<<endl;
            cout<<"queue 2: "<<endl;
            q2->display();
            q->copyQ(q2);
            cout<<endl;
            cout<<"After copy: "<<endl;
            cout<<"queue 1: "<<endl;
            q->display();
            cout<<endl;
            cout<<"queue 2: "<<endl;
            q2->display();

        }
        else if(m==8)
        {
            q->CategorizedGroupQ();
        }

        else if(m==9)
        {
            cout<<"before deleting negetive: "<<endl;
            cout<<"Queue : "<<endl;
            q->display();
            cout<<endl;
            q->deleteNegetive();
            cout<<endl;
            cout<<"After delete: "<<endl;
            cout<<"queue : "<<endl;
            q->display();
            cout<<endl;


        }
        else if(m==10)
        {

            q->distroy();
            int n;
            cout<<"How many data you want to push in stack : ";
            cin>>n;
            for(int i=0; i<n; i++)
            {
                int d;
                cout<<"Enter value: ";
                cin>>d;
                s->push(d);
            }
            cout<<"before convertion "<<endl;
            cout<<"stack: "<<endl;
            s->display();
            cout<<endl;
            cout<<"Queue: "<<endl;
            q->display();
            q->StackToQ(s);
            cout<<"After convertion "<<endl;
            cout<<"stack: "<<endl;
            s->display();
            cout<<endl;
            cout<<"Queue: "<<endl;
            q->display();

        }
        else if(m==11)
        {

            cout<<"before reverse "<<endl;
            cout<<"queue : "<<endl;
            q->display();
            cout<<endl;
            q->reverseQ();
            cout<<endl;
            cout<<"After reverse "<<endl;
            cout<<"queue : "<<endl;
            q->display();
        }

        else if(m==12)
        {
            q->QtoStack(s);
            cout<<"Queue: "<<endl;
            q->display();

            cout<<endl;
            cout<<"stack: "<<endl;
            s->display();
        }

        else if(m==13)
        {

            cout<<"Current queue is: "<<endl;
            q->display();

        }


        if(m<0 || m>14)
            cout<<endl<<"Invalid Option"<<endl;


        cout<<endl;

        cout<<"Current queue is: "<<endl;
        q->display();

        cout<<endl;
    }
    cout<<"Final queue is: "<<endl;
    q->display();





}

