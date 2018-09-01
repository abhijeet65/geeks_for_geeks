#include<bits/stdc++.h>
#define max 20
#define<algorithm>

using namespace std;


int stk[max];
int set[max];
int size;

int subset(int pos,int sum)
{
	if(sum>0)
	{
		for(i=pos;i<=size;i++)
		push(set[i]);
	    subset(i+1,sum-set[i]);
		pop();
	}
	if()


int main()
{
	int sum;
	int size,i;
	cout<<"Enter the size of set\n"
	cin>>size;
	cout<<"Enter the set element\n";
	for(i=1;i<=size;i++)
		cin>>set[i];
	cout<<"Enter the sum\n";
	cin>>sum;
	if(!(subset(pos,sum)))
		cout<<"No solution found\n";
	else
		cout<<"Yes solutions are here\n";
}

	