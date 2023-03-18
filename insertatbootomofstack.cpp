#include <bits/stdc++.h> 

void solve(stack<int>& s,int x){
      //base case
      if (s.empty()) {
        s.push(x);
        return;
      }
      int top =s.top();
      s.pop();
      //recursive call
      solve(s,x);
      s.push(top);

  }
stack<int> pushAtBottom(stack<int>& s, int x) 
{
    // Write your code here.
    
    solve(s,x);
    return s;
}
  
