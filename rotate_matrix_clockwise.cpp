#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int> > adj,int n)
{
	int i,j,x;
	vector<vector<int> > g;
	for(j=1;j<=n;j++){
		vector<int> v;
		v.clear();
	for(i=n;i>1;i--)
	{
		x=adj[i][j];
		v.push_back(x);
		
	}
	g.push_back(v);
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<g[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	vector<vector<int> > adj;
	int i,j,x;
	for(i=1;i<=n;i++)
	{
		vector<int> v;
		v.clear();
		for(j=1;j<=n;j++)
		{
			cin>>x;
			v.push_back(x);
		}
		adj.push_back(v);
		
	}
	solve(adj,n);
	
	
}

--------------------------------
	
	
	
	class Solution {
public:
     void rotate(vector<vector<int> > &matrix) {

        int len = matrix.size();
        for (int i = 0; i < len / 2; i++) {
            for (int j = i; j < len - i - 1; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[len - j - 1][i];
            matrix[len - j - 1][i] = matrix[len - i - 1][len - j - 1];
            matrix[len - i - 1][len - j - 1] = matrix[j][len - i - 1];
            matrix[j][len - i - 1] = tmp;
            }
        }
    }
};
	
	
	
	
	
	
	
	
	
	
	
	