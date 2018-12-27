#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int count=0;
	    for(i=5;n/i>=1;i=i*5)
	    {
	        count+=n/i;
	    }
	     cout<<count<<endl;
	}
	return 0;
}