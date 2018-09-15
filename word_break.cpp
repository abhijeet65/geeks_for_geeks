#include <bits/stdc++.h>
using namespace std;
int main()
 {
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      map<string,int> m;
      string s;
      for(int i=0;i<n;i++)
      {
        cin>>s;
        m[s]=1;
      }
      string s2;
      cin>>s2;
      int len=s2.length();
      int l=0;int h=0;
      while(l<len&&h<len)
      {
          string s3=s2.substr(l,h-l+1);
          if(m.find(s3)!=m.end())
          {
              l=h+1;
          } else
          {
              h=h+1;
          }
      } if(l==h+1)
      cout<<"1"<<endl;
      else 
      cout<<"0"<<endl;
    
  }
	return 0;
}
/*
2
12
i like sam sung samsung mobile ice cream icecream man go mango
ilike
12
i like sam sung samsung mobile ice cream icecream man go mango
idontlike
*/