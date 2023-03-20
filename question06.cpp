#include<iostream>
using namespace std;
class node
{
    public:
   node *prev;
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
      node* t=new node;
      t->value=v;
      t->next=NULL;
      t->prev=NULL;
      if(head==NULL)
      {
        head=t;
      } 
      else
      {
        node* p=head;
        while(p->next!=NULL)
        {
         p=p->next;
        }
        p->next=t;
        t->prev=p;
      }
    }
    Dequeu()
    {
        if(head==NULL)
        {
            cout<<"Element cannot be Dequeued: Queue is Empty"<<endl;
        }
        else
        {
        head=head->next;
        head->prev=NULL;
        }
    }
   PrintQueue()
   {
    node*t=head;
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
    s.Enqueue(1);
    s.Enqueue(2);
    s.Enqueue(3);
    s.Enqueue(4);
    s.Dequeu();
    s.PrintQueue();
    return 0;
}