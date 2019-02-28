#include<bits/stdc++.h>
using namespace std;

void possiblestr(char a[],string s,int n,int k)
{
	if(s.length()==k){
		cout<<s<<endl;
		return;
	}
	for(int i=0;i<n;i++)
	{
		possiblestr(a,s+a[i],n,k);
	}
}

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cout<<"Enter the size of array";
		cin>>n;
		char a[n];
		int k;
		cout<<"Entre the length";
		cin>>k;
		int i;
		for(i=0;i<n;i++)
			cin>>a[i];
		string str="";
		possiblestr(a,str,n,k);
	}
}
