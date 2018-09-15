#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct interval{
	int start;
	int end;
	
	
};

bool comp(interval i1,interval i2)
{
	return(i1.start < i1.end);
}

void mergeinterval(interval arr[],int n)
{
	if(n<=0)
		return;
	stack<interval> s;
	sort(arr,arr+n,comp);
	s.push(arr[1]);
	int i;
	for(i=2;i<=n;i++)
	{
		interval t=s.top();
		
		if(t.end < arr[i].start )
			s.push(arr[i]);
		else if(t.end < arr[i].end)
		{
			t.end=arr[i].end;
			s.pop();
			s.push(t);
		}
	}
	
	while(!s.empty())
	{
		interval k=s.top();
		cout<<"{ "<<k.start<<","<<k.end<<" }";
		s.pop();
	}
		
}

int main()
{
	int n,i;
	cout<<"Enter the numebr of intervals";
	cin>>n;
	interval arr[n];
	for(i=1;i<=n;i++)
	{
		cin>>arr[i].start;
		cin>>arr[i].end;
	}
	mergeinterval(arr,n);
}	
	
	
	