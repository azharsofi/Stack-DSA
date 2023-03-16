//reverse an array using stack
#include<iostream>
#include<stack>
using namespace std;

int main(){
   string s="AZHAR";
   stack<char> st;
  for(int i=0;i<s.length();i++){
    char ch=s[i];
    st.push(ch);
  }
  string ans="";
  while(!st.empty()){
    char ch=st.top();
    st.pop();
    ans.push_back(ch);
  }
  cout<<ans<<endl;
  return 0;

}
