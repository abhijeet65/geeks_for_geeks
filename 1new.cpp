#include<bits/stdc++.h>
using namespace std;
int flag=1;
void printpattern(int n,int k)
{
    if(n==k){
		cout<<n<<" ";
    return;
	}
    
    if(n>0 && flag)
    {
    cout<<n<<" ";
    printpattern(n-5,k);
    }
    else
    {
		flag=0;
        cout<<n<<" ";
        printpattern(n+5,k);
    }
    return;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<n<<" ";
	    printpattern(n-5,n);
	    
	    cout<<endl;
	}
	
	
	return 0;
}