#include<bits/stdc++.h>

using namespace std;
int powerof2(int x)
		{
			if(x&(x-1))
				return 0;
			else
				return 1;
			
		}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		if(powerof2(x))
			cout<<"Yess"<<endl;
		else
			cout<<"n0"<<endl;
	}
}
		
		