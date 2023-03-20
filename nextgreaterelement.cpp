//important question for interview

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> s;
        s.push(arr[n-1]);
        vector<long long>a;
        a.push_back(-1);
        for(long long i=n-2;i>=0;i--){
            while(!s.empty()&&s.top()<=arr[i])
            s.pop();
            long long gre=(s.empty())?(-1):(s.top());
            a.push_back(gre);
            s.push(arr[i]);
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
