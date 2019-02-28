#include<bits/stdc++.h>
using namespace std;

int check(int k)
{
	double a=sqrt(k);
	if(a-floor(a)==0)
		return 1;
	else 
		return 0;
}


int main()
{
	int n;
	cin>>n;
	if(check(n))
		cout<<"Perfect ";
	else
		cout<<"not perfect";
}
