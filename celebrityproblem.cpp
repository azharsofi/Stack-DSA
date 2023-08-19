
class Solution 
{
    public:
    bool knows(vector<vector<int> >& M,int a ,int b ,int n){
        if(M[a][b]==1)
        return true;
        else
        return false;
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        for(int i=0;i<n;i++)
        s.push(i);
        while(s.size()>1){
            int a =s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(knows(M,a,b,n))
            s.push(b);
            else
            s.push(a);
        }
        int ans=s.top();
        int zc=0;
        for(int i=0;i<n;i++){
            if(M[ans][i]==0)
            zc++;
        }
        if(zc!=n)
        return -1;
        int oc=0;
        for(int i=0;i<n;i++){
            if(M[i][ans]==1)
            oc++;
        }
        if(oc!=n-1)
        return -1;
        
        return ans;
    }
};
