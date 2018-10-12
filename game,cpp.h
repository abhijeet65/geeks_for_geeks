#include<bits/stdc++.h>

using namespace std;

int product(int x)
{
	int pr=1;
	while(x>0)
	{
		int r=x%10;
		pr=pr*r;
		x=x/10;
	}
	return pr;
}
int sum(int x)
{
	int sum1=0;
	while(x>0)
	{
		int r=x%10;
		sum1=sum1+r;
		x/=10;
	}
	return sum1;
	
}
int main()
{
	
	int i,c=0;
	for(i=1000;i<=9999;i++)
	{
		
		ans=5*product(sum(i));
		next=sum(product(i));
		if(next==ans)
			c++;
		
	}
	cout<<c;
}

