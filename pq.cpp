#include<bits/stdc++.h>
using namespace std;

int makesum(int a[],int n)
{
	int i;
    priority_queue <int, vector<int>, greater<int> > pq;
    for(i=0;i<n;i++)
    {
        pq.push(a[i]);
    }
    string s1,s2;
    int flag=0;
     while(!pq.empty()) 
    { 
        // appending top of the queue to the string 
        s1+=(48 + pq.top()); 
        pq.pop(); 
        if(!pq.empty()) 
        { 
            s2+=(48 + pq.top()); 
            pq.pop(); 
        } 
    } 
	cout<<s1<<" "<<s2<<endl;
	int n1=atoi(s1.c_str());
	int n2=atoi(s2.c_str());
	return(n1+n2);
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
		int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[n];
	    int ans=makesum(a,n);
	    cout<<ans<<endl;
	}
	
	
	return 0;
}