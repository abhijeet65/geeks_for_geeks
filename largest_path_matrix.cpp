#include<bits/stdc++.h>
#define row 4
#define col 5
using namespace std;
 int issafe(int M[][col],int row1,int col1,bool visited[][col])
{
	  return (row1 >= 0) && (row1 < row) &&
           (col1 >= 0) && (col1 < col) &&
           (M[row1][col1] && !visited[row1][col1]);
	
}

void dfs(int M[][col],int i,int j,bool visited[][col],int &count)
{
	static int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1};
	int k;
	visited[i][j]=true;
	for(k=0;k<8;++k){
	if(issafe(M,i+rowNbr[k],j+colNbr[k],visited)){
		count++;
	 dfs(M,i+rowNbr[k],j+colNbr[k],visited,count);
	}
	}
	
}


int solve(int M[][col],bool visited[][col])
{
	int result  = INT_MIN;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            // If a cell with value 1 is not
            if (M[i][j] && !visited[i][j])
            {
                // visited yet, then new region found
                int count = 1 ;
                dfs(M, i, j, visited , count);
 
                // maximum region
                result = max(result , count);
            }
         }
    }
    return result ;
}

int main()
{
	
	 int M[][col] = { {0, 0, 1, 1, 0},
                     {1, 0, 1, 1, 0},
                     {0, 1, 0, 0, 0},
                     {0, 0, 0, 0, 1}};
		
		bool visited[row][col];
    memset(visited,false,sizeof(visited));
		
    int ans=solve(M,visited);
	cout<<ans<<endl;
}




	
	
	