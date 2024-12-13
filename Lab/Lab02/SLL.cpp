#include <iostream>
#include "sll.h"
using namespace std;
int main(){
    sll s;

    int menu=-1;
    while(menu!=0){

        cout<<"MENU"<<endl;
    cout<<"1.Add item"<<endl;
    cout<<"2.Add item in the beginning "<<endl;
    cout<<"3.Add in any position of the list"<<endl;
    cout<<"4.Check the data int the list"<<endl;
    cout<<"5.Check number of items at the list"<<endl;
    cout<<"6.Check whether the  list is empty"<<endl;
    cout<<"7.Get item  of  entered  position"<<endl;
    cout<<"8.Get position of the data"<<endl;
    cout<<"9.Remove first element"<<endl;
    cout<<"10.Remove last element"<<endl;
    cout<<"11.Remove and the return item of wntered position"<<endl;
    cout<<"12.Reverse element of the  list"<<endl;
    cout<<"13.Sort the list"<<endl;
    cout<<"14.Display the List"<<endl;
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
            int data;
         cout<<"Enter value to add at beginnig: ";
    cin>>data;
        s.addBegin(data);
    }

    if(menu==3){
        int item,pos;
        cout<<"Enter position: ";
        cin>>pos;
        if(pos<=0 || pos>s.size())
            cout<<"Invalid";
        else{
        cout<<"Enter value: ";
        cin>>item;
        s.addAnyPos(pos,item);
        }

    }
    if(menu==4){
    int data;
    cout<<"Enter item to search: ";
    cin>>data;
    if(s.contains(data)){
            cout<<endl;
        cout<<endl<<"The List contains the item"<<endl;
       }
       else
        cout<<endl<<"The List does not contain the item"<<endl;
    }

    if(menu==5){
            cout<<endl<<"Size of the List is= "<<s.size()<<endl;

    }
    if(menu==6){
       if(s.isEmpty()){
        cout<<"The List is Empty"<<endl;
       }
       else
        cout<<"The List is not Empty"<<endl;
    }
    if(menu==7){
          cout<<"Enter the position to get the data: ";
        int data;
        cin>>data;
        cout<<"The data in pos-"<<data<<" is: "<<s.get(data);
    }
    if(menu==8){
          cout<<"Enter the data to get the index: ";
        int data;
        cin>>data;

        if(s.indexof(data)!=0)
        {

        }
        else
            cout<<"data not found";
    }

    if(menu==9){
        s.removeFirst();
         cout<<"Successfully removed the First data"<<endl;
    }
    if(menu==10){
        s.removeLast();

         cout<<"Successfully removed the Last data"<<endl;
    }
    if(menu==11){
        cout<<"Enter the position to remove: ";
        int data;
        cin>>data;
        s.remove(data);

         cout<<"removed "<<endl;
    }
    if(menu==12){

        s.reverse();
         cout<<"reversing done "<<endl;
    }
    if(menu==13){

        s.sort();
         cout<<" sorting done "<<endl;
    }
    if(menu==14){

        s.display();

    }

    if(menu<0 || menu>14)
        cout<<"Enter valid option from ( 1 - 14 )"<<endl;

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



