//STACK USING STL

#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creation of stack
    stack<int> s;
    //pushing elements into stack by using push function
    //let us push 3 elements
    int n=3;
    int x;
    while(n--){
        
        cout<<"enter element to be pushed :";
        cin>>x;
        cout<<endl;
        s.push(x);
    }
    //to find size of stack
     cout<<"size of stack: "<<s.size()<<endl;
    //lets us pop two elements. All the operation in stack are performed from one end called TOS
   s.pop();
   s.pop();
   //lets us display top element
   cout<<"top element :"<<s.top()<<endl;
   //let us check whether stack is empty or not using empty function
   if(s.empty())
   cout<<"empty "<<endl;
   else
   cout<<"Not empty"<<endl;



return 0;

}
