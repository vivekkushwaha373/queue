#include<bits/stdc++.h>
using namespace std;
auto min_element(queue<int>&x)
{
   static int min;//unitialized segment;
   min=INT_MAX;
   while(!x.empty())
   {
    if(min>x.front() && x.front()!=-1)
    {
        min=x.front();
        x.pop();
        x.push(-1);
        break;
    }
    x.pop();
   }
  return min;
}
sortQueue(queue<int>x)
{
queue<int>y;
for(int i=0;i<x.size();i++)
{
    y.push(min_element(x));
}
}

int main()
{
queue<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s=sortQueue(s);
while(!s.empty())
{
cout<<s.front()<<" ";
s.pop();
}
return 0;
}