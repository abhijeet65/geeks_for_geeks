#include<bits/stdc++.h>

using namespace std;

int k;
int palindrome(int n,int sum)
{
	if(!n)
		return sum;
	return(palindrome(n/10,sum*10+n%10));
}
	

int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	k=n;
	n=palindrome(n,0);
	cout<<n<<endl;
	if(k==n)
		cout<<"Palindrome"<<endl;
	else
		cout<<"not palindrome"<<endl;
	}
}
	
