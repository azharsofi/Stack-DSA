
class Solution{
public:
    
   void insert(stack<int> &s,int x) {
       if(s.empty())
       {
           s.push(x);
           return;
       }
       
       int num=s.top();
       s.pop();
       insert(s,x);
       s.push(num);
       return;
       
   }
    
    
    
    
    
    
    void Reverse(stack<int> &s){
        //base condition
        if(s.empty())
        return ;
        int top=s.top();
        s.pop();
        Reverse(s);
        insert(s,top);
        return;
        
    }
};
