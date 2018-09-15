#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int c,k=0;
		for(c=31;c>=0;c--)
		{
			k=n>>c;
			if(k & 1)
				cout<<"1";
			else
				cout<<"0";
		}
		cout<<endl;
	}
	
	
}