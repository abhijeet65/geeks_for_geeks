
void digits(int x,vector<int> &res)
{
    int r;
    while(x>0)
    {
        r=x%10;
        res.push_back(r);
        x=x/10;
    }
}
vector<int> solvearray(vector<int> A)
{
    int i;
    vector<int> res;
    for(i=0;i<A.size();i++)
    {
        digits(A[i],res);
    }
    return res;
}

bool comp(int x,int y)
{
    return(x>y)?true:false;
}

string Solution::largestNumber(const vector<int> &A) {
    int i;
    string s="";
    vector<int> ans;
    ans=solvearray(A);
    sort(ans.begin(),ans.end(),comp);
    for(i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    
    return "abhi";
    
    
}
