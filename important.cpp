#include<bits/stdc++.h>

using namespace std;
static int count1=0;

void binarysearch(vector<int> arr,int l,int r,int key)
{
	if(l>=r)
		return;
	int mid=l+(r-1)/2;
	
	if(key>arr[mid])
		l=mid+1;
	else if(key<arr[mid])
		r=mid-1;
	else
		count1++;
	    
    binarysearch(arr,l,r,key);
	
}
	
	
	
int main()
{
	int n;
	cin>>n;
	vector<int> arr;
	int x,i,key;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	cout<<"enetr the key\n";
	cin>>key;
	
	binarysearch(arr,0,n-1,key);
	cout<<count1;
}
