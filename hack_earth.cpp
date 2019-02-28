#include<bits/stdc++.h>

using namespace std;

vector<int> makeperfect(vector<int> &v,int n,int pos,int val)
{
	if(pos >= n)
		return v;
	
		if(pos==1){
		v.push_back(val);
		return makeperfect(v,n,pos+1,val);
		}
		
		
		for(int i=1;i<=100;i++){
			
			double a=sqrt(v[pos-1]+i);
			if((a-floor(a))==0 && (v[pos-1]+i)==(val+1)*(val+1))
				return makeperfect(v,n,pos+1,i);
			
		}
		        v.pop_back();
				return makeperfect(v,n,pos,val+1);
}
		
				

int main()
{
	int n;
	cin>>n;
	
	vector<int> ans,v;
	vector<int>::iterator it;
	ans=makeperfect(v,n,0,1);
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	
	
}


	