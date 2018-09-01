#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
	int n,i,median;
	cin>>n;
	vector<int> v;
	int x,size;
	for(i=1;i<=n;i++)
	{
	   cin>>x;
	v.push_back(x);
	sort(v.begin(),v.end());
	size=v.size();
	   if(size%2==1)
	   median=v.at(ceil(size/2));
	   else
	   {
	       median=v.at((size/2)-1)+v.at((size/2));
		   median/=2;
	   }
	   
	   cout<<median<<endl; 
	}
	return 0;
}