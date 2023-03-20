#include<iostream>
using namespace std;
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
    Enqueue(int v)
    {
        node* ptr=new node;
        ptr->value=v;
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
        }
        else
        {
            node* temp=head;
            while(temp->next!=NULL)
            {
               temp=temp->next;
            }
            temp->next=ptr;
        }

    }
    Dequeue()
    {
        node*t=head;
        if(t==NULL)
        cout<<"Element cannot be Dequeued"<<endl;
        else
        {
        head=head->next;
        delete t;
        }

    }
    printQueue()
    {
        node* t=head;
        while(t!=NULL)
        {
            cout<<t->value<<" ";
            t=t->next;
        }
    }
};
int main()
{
LL s1;
s1.Enqueue(1);
s1.Enqueue(2);
s1.Enqueue(3);
s1.Enqueue(4);
s1.Enqueue(6);
s1.Dequeue();
s1.printQueue();

return 0;
}