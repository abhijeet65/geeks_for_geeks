#include<bits/stdc++.h>
using namespace std;
vector<int> v;
set<int> p;
void pushn(int n)
{
	while(n>0)
	{
		int r=n%10;
		v.push_back(r);
		n=n/10;
	}
}
void pushcube(int n)
{
	while(n>0)
	{
		int r=n%10;
		p.insert(r);
		n=n/10;
	}
}
int main()
{
	int n;
	int count=0;
for(i=1;i<=100;i++)
{
	p.clear();
	v.clear();
	pushn(i);
	n=pow(i,3);
	pushcube(n);
	
	int i;
	int c=0;
	
    for(i=0;i<v.size();i++)
		if(p.insert(v[i])==false)
			break;
		else
			c++;
	if(c==v.size())
		count++;


	}
	cout<<count;
	

}
