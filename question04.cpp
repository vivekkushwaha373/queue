#include<iostream>
using namespace std;
//Implementation of priority queue;
class node
{
public:
int value;
node* next;
};
class LL
{
node* head;
public:
LL()
{
    head=NULL;
}
Enqueue(int n)
{
node* t=new node;
t->value=n;
t->next=NULL;
if(head==NULL)
{
    head=t;
}
else
{
    node* p=head;
    if(p->value<t->value)
    {
      
        head=t;
        head->next=p;
    }
    else
    {
        while(p->next!=NULL)
        {
            if(p->next->value<t->value)
            {
            t->next=p->next;
            p->next=t;
            break;
            }
            p=p->next;

        }
        if(p->next==NULL)
        {
            p->next=t;
        }
    }
   
}
}
PrintElement()
{
    node*ptr=head;
    while(ptr!=NULL)
    {
     cout<<ptr->value<<" ";
     ptr=ptr->next;
    }
}
};
int main()
{
LL s1;
s1.Enqueue(1);
s1.Enqueue(2);
s1.Enqueue(8);
s1.Enqueue(4);
s1.Enqueue(5);
s1.PrintElement();

}