#include <bits/stdc++.h>

using namespace std;

string feeOrUpfront(int n, int k, int x, int d, vector <int> p) {
    // Complete this function
    float r=x*.01;
    float sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum=sum+max(float(k),r*p[i]);
    }
    //cout<<sum<<" "<<k<<endl;
    if(ceil(sum)<=(d))
        return("fee");
    else
        return("upfront");
    
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int k;
        int x;
        int d;
        cin >> n >> k >> x >> d;
        vector<int> p(n);
        for(int p_i = 0; p_i < n; p_i++){
        	cin >> p[p_i];
        }
        string result = feeOrUpfront(n, k, x, d, p);
        cout << result << endl;
    }
    return 0;
}