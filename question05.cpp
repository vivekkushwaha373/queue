#include<iostream>
using namespace std;
class node
{
public:
node* prev;
int value;
node* next;
};
class DLL
{
node* head;
public:
DLL()
{
    head=NULL;
}
Enqueue(int v)
{
node* ptr=new node;
ptr->prev=NULL;
ptr->value=v;
ptr->next=NULL;
if(head==NULL)
{
    head=ptr;
}
else
{
    node *t=head;
    if(t->value<ptr->value)
    {
        head=ptr;
        ptr->next=t;
        t->prev=ptr;
    }
    else
    {
        while(t->next!=NULL)
        {
           
            if(t->next->value<ptr->value)
              {
              ptr->next=t->next;
              t->next->prev=ptr;
              ptr->prev=t;
              t->next=ptr;
              cout<<"l";
              break;
              }
              t=t->next;
        }
        if(t->next==NULL)
        {
            cout<<"c";
            t->next=ptr;
            ptr->prev=t;
        }
    }
}
}
PrintPriorityQueue()
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->value<<" ";
        t=t->next;
    }
    cout<<endl;
}
};
int main()
{
    DLL s;
    s.Enqueue(3);
    s.Enqueue(5);
    s.Enqueue(5);
    s.Enqueue(10);
    s.Enqueue(1);
    // s.Enqueue(5);
    // s.Enqueue(6);
    s.PrintPriorityQueue();
    return 0;
}