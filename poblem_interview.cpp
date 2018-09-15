int Solution::maximumGap(const vector<int> &A) {
    int max=0,diff;
    int i,j;
    for(i=0;i<A.size();i++)
    {
        for(j=i+1;j<A.size();j++)
        {
            if(A[i]<=A[j])
            {
                diff=j-i;
                if(max<diff)
                max=diff;
            }
        }
    }
    return max;
    
}
-----------------------------------------------------------
int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int> > v;
    int i,diff;
    for(i=0;i<A.size();i++)
    {
        v.push_back(make_pair(A[i],i));
    }
    sort(v.begin(),v.end());
    int max=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i].second<v[i+1].second)
        diff=v[i+1].second-v[i].second;
        if(max<diff)
        max=diff;
        
    }
    return max;
    
    
}
