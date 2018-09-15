class Solution {
    public:
    
    bool hotel(vector<int> &arrive, vector<int> &depart, int K) {
        
        if(K == 0)
                return false;

        int N = arrive.size();
        
        vector<pair<int, int> > vec;
        for(int i = 0; i < N; ++i) {
            vec.push_back(make_pair(arrive[i], 1));
            vec.push_back(make_pair(depart[i], 0));
        }
         
        sort(vec.begin(), vec.end());
        
        int curActive = 0;
        int maxAns = 0;
        for (int i = 0; i < vec.size(); i++) {
           if (vec[i].second == 1) { // arrival
               curActive++;
               maxAns = max(maxAns, curActive);
            } else {
                curActive--;
            }
        }

        if (K >= maxAns) return true;
        return false;
    }
};