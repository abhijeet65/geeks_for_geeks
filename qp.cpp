#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    
    string s;
    getline(cin,s);
    //cout<<s;
    int m,l;
	l=s.length();
	cin>>m;
	while(m--)
	{
		string q="";
		cin>>q;
		int k=q.length();
		int i=0,j=0;
		int first=1,start,end;
		while(i<k && j<l)
		{
			
			if(q[i]==s[j])
			{
				if(first==1)
				{
					start=j;
					first=0;
				}
				else if(i==k-1){
				end=j;
			    }
				i++;
				j++;
				
			}
			else{
				j++;
			}
			
		}
		if(i!=k)
		{
			cout<<"NOT POSSIBLE";
			
		}else
		{
		cout<<"POssible"<<start<<" "<<end<<endl;	
		}

		
		
	}
    
    
    
	return 0;
}