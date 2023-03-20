#include<iostream>
// #include<queue>
#include<bits/stdc++.h>
using namespace std;

Enqueue(queue<int>x)
{
   while(!x.empty())
   {
    cout<<x.front()<<" ";
    x.pop();
   }
   cout<<endl;
}
Stackuse(queue<int>x)
{
stack<int>y;
while(!x.empty())
   {
    y.push(x.front());
    x.pop();
   }

while(!y.empty())
{
  cout<<y.top()<<" ";
  y.pop();
}
}

int main()
{
   queue<int>s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(5);
  s.push(4);
  Enqueue(s);
  Stackuse(s);
    return 0;
}