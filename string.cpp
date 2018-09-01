#include<bits/stdc++.h>
#include<string>

using namespace std;
bool compare(const int &a,const int &b){
    string s1=to_string(a);
    string s2=to_string(b);
    if(s1+s2>s2+s1)
        return true;
    return false;
}
string greatest_int(int a[],int n){
    string s="";
    if(n==1){
        s=s+to_string(a[0]);
        return s;
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        string t=to_string(a[i]);
        s=s+t;
    }
    return s;
}
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n ;i++)  cin>>a[i];
         cout<<greatest_int(a,n)<<"\n";
     }
	//code
	return 0;
}