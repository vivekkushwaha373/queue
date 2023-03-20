#include<iostream>
using namespace std;
class  Queue
{
int arr[100];
int rear;
int front;
int size;
public:
Queue()
{
    front=-1;
    rear=-1;
    size=100;
}
void Enqueue(int v)
{
    if(rear==-1)
    {
        rear++;
        front++;
        arr[front]=v;
    }
    else if(size-1==rear)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        arr[++rear]=v;
    }
   
}
Dequeue()
{
    if(front==-1)
    {
        cout<<"Empty queue"<<endl;
    }
    else if(front>rear)
    {
        cout<<"Empty queue"<<endl;
    }
    else
    {
        front++;
    }
}
 printqueue()
    {
        for(int i=front;i<rear+1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
   Queue s1;
   s1.Enqueue(1);
   s1.Enqueue(2);
   s1.Enqueue(3);
   s1.Enqueue(4);
   s1.Enqueue(5);
   s1.Enqueue(6);
   s1.Dequeue();
   s1.Dequeue();
   s1.Dequeue();
   s1.Dequeue();
   s1.Dequeue();
   s1.Dequeue();
   s1.printqueue();
    return 0;
}
// with the help of dynamic Array;
/*
#include<iostream>
using namespace std;
class QueueDA
{
int *str;
int front;
int rear;
int size;
int capacity;
public:
QueueDA()
{
    capacity=1;
    str=new int[capacity];
    front=-1;
    rear=-1;
}
Resize()
{
int *temp=new int[2*capacity];
capacity=2*capacity;
for(int i=front;i<size;i++)
{
    temp[i]=str[i];
}
str=temp;
}
Enqueue(int v)
{
if(rear==-1)
{
    rear++;
    front++;
    str[rear]=v;
    size++;
}
else
{
    if(size==capacity)
    Resize();
    str[++rear]=v;
    size++;
}
}
printqueue()
{
    for(int i=front;i<rear+1;i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
}
Dequeue()
{
    if(front==-1)
    cout<<"Empty queue"<<endl;
    else if(front==rear)
    {
        front++;
    }
    else if(front>rear)
    {
        cout<<"Empty queue"<<endl;
    }
    else
    {
        front++;
    }
}
};
int main()
{
QueueDA s1;
s1.Enqueue(1);
s1.Enqueue(2);
s1.Enqueue(3);
s1.Enqueue(4);
s1.Enqueue(6);
s1.Enqueue(4);
s1.Dequeue();
s1.printqueue();
}
*/