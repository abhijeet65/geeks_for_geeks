#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<string,int> m;
        int n,i;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            string str="";
            cin>>str;
            m[str]++;
        }
        int max=0;
        pair<string,int> ans;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>max)
            {
                ans={it->first,it->second};
                max=it->second;
            }
        }
        cout<<ans.first<<" "<<ans.second<<endl;
        
    }
}