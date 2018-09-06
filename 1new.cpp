#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
	cout<<"Enter the lue of n"<<endl;
	int n,i,x;
	cin>>n;
	stack<int> s;
	for(i=0;i<=n;i++)
	{
		cin>>x;
		s.push(x);
	}
	s.pop();
	cout<<s.top()<<endl;
	//cout<<ans<<endl;
	
	stack<int>::iterator it;
	for(it=s.begin();it!=s.end();it++)
		cout<<*it<<" ";
}

	