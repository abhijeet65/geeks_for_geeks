#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,i;
		cin>>n;
		vector<int> v;
		for(i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		vector<int>::iterator it;
		int key;
		cin>>key;
		it=find(v.begin(),v.end(),key);
		int k=it-v.begin();
		if(it!=v.end())
			cout<<k<<endl;
		else
			cout<<"-1"<<endl;
	}
}
