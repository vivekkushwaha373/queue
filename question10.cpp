#include<bits/stdc++.h>
using namespace std;
int fun(priority_queue<int,vector<int>,greater<int>>&y)
{
priority_queue<int,vector<int>,greater<int>>p;
int s=0;
int a,b;
while(!y.empty())
{
a=y.top();
y.pop();
if(y.empty()==1)
break;
b=y.top();
y.pop();
s=s+a+b;
p.push(a+b);
    while(!y.empty())
    {
     
    p.push(y.top());
    y.pop();
    }
    while(!p.empty())
    {
        
      y.push(p.top());
      p.pop();
    }
}
return s;
}
int main()
{
  priority_queue<int,vector<int>,greater<int>>x;
  x.push(2);
  x.push(3);
  x.push(6);
  x.push(4);
  cout<<fun(x);
    return 0;
}