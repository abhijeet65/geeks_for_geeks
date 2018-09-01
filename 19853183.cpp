#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{
	int t,flag=0;;
	long long int p=9,q;
	cin>>t;
	long long int n[200],a,count=0;
	for(int i=0;i<t;i++)
	{
		cin>>n[i];
	}
	for(int i=0;i<t;i++)
	{

		if(n[i]==1)
		cout<<"1 1"<<endl;
		else{
		cout<<"1 1";
		for(int h=floor(n[i]/2)-1;h>=0;h--)	
		cout<<"0";
		cout<<endl;
	}
}
}
