#include<bits/stdc++.h>
using namespace std;

stack<int> stacksort(stack<int> &input)
{
	stack<int> temp;
	
	while(!input.empty())
	{
		int n=input.top();
		input.pop();
		
		while(!temp.empty() && temp.top() > n)
		{
			input.push(temp.top());
			temp.pop();
		}
		temp.push(n);
	}
	return temp;
	
}

int main()
{
	stack<int> input;
	
	int n,x,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
        input.push(x);
	}
	stack<int> temp=stacksort(input);
	while(!temp.empty())
	{
		cout<<temp.top()<<" ";
		temp.pop();
	}
}


