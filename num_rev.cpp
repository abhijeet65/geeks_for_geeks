#include<iostream>
using namespace std;
int printrev(int n,int ans)
{
    if(!n)
    return ans;
    
    ans=ans*10+n%10;
    return(printrev(n/10,ans));
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ans=printrev(n,0);
	    cout<<ans<<endl;
	    
	    
	}
	
	return 0;
}

