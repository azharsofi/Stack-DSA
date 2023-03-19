#include <bits/stdc++.h> 
void sortinsert(stack<int> &s,int x){
	//base case
	if(s.empty()||(!s.empty()&&s.top()<x)){
		s.push(x);
		return;
	}

	int num=s.top();
	s.pop();
	//recursive call
	sortinsert(s,x);
	s.push(num);
	return;


}






void sortStack(stack<int> &s)
{
	// Write your code here
	//base condition
	if(s.empty()){
		return;
	}

	int top=s.top();
	s.pop();
	sortStack(s);
	sortinsert(s,top);
	return;

}
