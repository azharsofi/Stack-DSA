class Solution {
public:
   vector<int> nsr(vector<int>& a,int n){
       stack<int> s;
       vector<int> ans;
       s.push(n-1);
       ans.push_back(-1);
       for(int i=n-2;i>=0;i--){
           while(!s.empty()&&a[s.top()]>=a[i])
           s.pop();
           int sr=s.empty()?-1:s.top();
           ans.push_back(sr);
           s.push(i);
       }
       reverse(ans.begin(),ans.end());
       return ans;



   }
    vector<int> psr(vector<int>& a,int n){
       stack<int> s;
       vector<int> ans;
       s.push(0);
       ans.push_back(-1);
       for(int i=1;i<n;i++){
           while(!s.empty()&&a[s.top()]>=a[i])
           s.pop();
           int sr=s.empty()?-1:s.top();
           ans.push_back(sr);
           s.push(i);
       }
       
       return ans;


    }
   


    int largestRectangleArea(vector<int>& heights) {
      int n=heights.size();
      vector<int> next(n);
      next=nsr(heights,n);
       vector<int> prev(n);
      prev=psr(heights,n);
      int area=INT_MIN;
      for(int i=0;i<n;i++){
          int l=heights[i];
          if(next[i]==-1)
          {
              next[i]=n;
          }
          int b=next[i]-prev[i]-1;
         int newarea=l*b;
          area=max(area,newarea);
      }
      
      return area;
        
    }
};
