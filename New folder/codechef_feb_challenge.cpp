#include<bits/stdc++.h>

using namespace std;

//passes all test cases :)

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int n;
		cin>>n;
		string s;
		string name[n];
		set<char> test;
		int i=0;
		do{
			set<char> st;
			st.clear();
			cin>>s;
			string s1="";
			for(int j=0;j<s.length();j++){
				st.insert(s[j]);
				test.insert(s[j]);
			}
			set<char>::iterator it;
			int j;
			for(it=st.begin(),j=0;it!=st.end();it++,j++)
				s1+=*it;
			name[i]=s1;
			i++;
		}while(i < n);
		
		/*for(int i=0;i<n;i++)
			cout<<name[i]<<endl;
		*/
		set<char>::iterator it;		
		int flag=0;
		/* for(it=test.begin();it!=test.end();it++)
				cout<<*it<<" ";
			*/
			for(it=test.begin();it!=test.end();it++)
			{
				int c=0;
				for(int i=0;i<n;i++)
				{
					int len=name[i].length();
					for(int j=0;j<len;j++){
						if(*it==name[i][j]){
							c++;
							break;
						}
					}
				}
				if(c==n){
					flag++;
				}
			
			}
			if(flag==0)
				cout<<"0"<<endl;
			else
				cout<<flag<<endl;
				
		
	}
}

		