//static implementation of stack;
#include<iostream>
using namespace std;
 class stack{
    public:
    int size;
    int top;
    int *array;
    stack(int size){
        this->size=size;
        top=-1;
        array=new int[size];

    }
    void push(int e){
        if(top==size-1)
        cout<<"stack is full"<<endl;
        else{
        
            array[++top]=e;
        }

    }
    void pop(){
        if(top==-1)
        cout<<"stack is empty"<<endl;
        else
        top--;

    }
    int peek(){
        if(top>=0&&top<size)
        return array[top];

    }
    bool isempty(){
        if(top==-1)
        return true;
        else
        return false;

    }
};

int main(){
    stack s(5);
    int x;
    for(int i=0;i<5;i++){
        cout<<"enter element to be pushed :";
        cin>>x;
        cout<<endl;
        s.push(x);
    }
    
for(int i=0;i<3;i++)
{
    s.pop();
    cout<<"top : "<<s.peek()<<endl;}
    for(int i=0;i<2;i++){
        s.pop();
    }

  if(s.isempty())
  cout<<"empty"<<endl;
  else
  cout<<"not empty"<<endl;




return 0;

}
