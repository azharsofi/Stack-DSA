class Solution
{
    public:
  
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int n)
    {
        int c=0;
        solve(s,c,n);
    }
    
  void solve(stack<int>&s,int c, int n){
        //base case
        if(c==n/2){
            s.pop();
              return;
        }
          int num=s.top();
        s.pop();
        solve(s,c+1,n);
        s.push(num);
        }  
    
