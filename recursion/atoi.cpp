//recusive implementation of atoi

#include<bits/stdc++.h>
using namespace std;

int convertatoi(string s,int pos,int sum)
{
	if(pos==s.length())
		return sum;
	else
	{
		return(convertatoi(s,pos+1,(sum*10)+(s[pos]-'0')));
	}
	
}

int main()
{
	int i;
	
	string s;
	cout<<"Enter the string";
	getline(cin,s);
	for(i=0;i<s.length();i++)
		cout<<s[i];
	cout<<endl;
	int k=convertatoi(s,0,0);
	cout<<"----";
	cout<<k<<endl;
}

