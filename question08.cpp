#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;
Enqueue(queue<int>x)
{
while(!x.empty())
{
    cout<<x.front()<<" ";
    x.pop();
}
}
Stackuse(queue<int>y,int k)
{
   stack<int>i;
   while(k!=0)
   {
    i.push(y.front());
    y.pop();
    k--;
   }
   cout<<endl;
   while(!i.empty())
   {
    cout<<i.top()<<" ";
    i.pop();
   }
   while(!y.empty())
   {
     cout<<y.front()<<" ";
     y.pop();
   }

}
int main()
{   int k;
    cin>>k;
    queue<int>x;
    x.push(1);
    x.push(2);
    x.push(3);
    x.push(4);
    Enqueue(x);
    Stackuse(x,k);
    return 0;
}