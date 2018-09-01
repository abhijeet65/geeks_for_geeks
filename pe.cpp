#include<bits/stdc++.h>
using namespace std;


int digitsum(int n)
{
	if(n==0)
		return 0;
	else{
		return(digitsum(n/10)+n%10);
	}
}


int main()
{
	int n;
	cin>>n;
int k =digitsum(n);
cout<<k;

}
