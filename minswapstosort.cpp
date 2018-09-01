int minSwaps(int arr[], int n){
    /*Your code here */
    int i,j;
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos,arrPos+n);
    int cycle_size=0,ans=0;
    vector<int> vis(n,false);
    for(i=0;i<n;i++)
    {
        if(vis[i]==1 || arrPos[i].second==i)
        continue;
        cycle_size=0;
        if(!vis[i])
        {
            j=i;
            while(!vis[j])
             {
                 vis[j]=1;
                 j=arrPos[j].second;
                 cycle_size++;
             }
        }
        ans=ans+(cycle_size-1);
    }
    
   return ans; 
}
