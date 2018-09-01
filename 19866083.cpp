#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t,N,minX,maxX;
    cin>>t;
    while(t--){
        cin>>N;
        if(N==1)
            cout<<"1 1"<<endl;
        else{
            cout<<"1 1";
            for(auto i=0;i<=N/2-1;i++)
                cout<<"0";
            cout<<endl;
        }
    }
    return 0;
}