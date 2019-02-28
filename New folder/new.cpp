// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include<bits/stdc++.h>
#include<cstring>
using namespace std;


void solution(string &s, int K) {
    // write your code in C++14 (g++ 6.2.0)
    string v="";
    
    int count=0;
    
    //cout<<"dainsh";
    for(auto i =s.rbegin();i!=s.rend();i++)    {
        if(count==K)
        {
         v=v+'-';
         count=0;
        }
    if(*i =='-')
    continue;
    else if(isdigit(*i)){
    v=v+char(*i);
    count++;
    }
    else{
    v=v+char(toupper(*i));
    count++;
    }
    
    }
    cout<<v;
}
    
    //cout<<"golu";
   // string s1="";
    //int p=v.length();
    //for(int i=0;i<p;i++)
    //{
     //   s1[i]=v[p-i-1];
    //}
    //return s1;
    //cout<<"dainsh;
int main()
{
    string s="2-4A0r7-4k";
    solution(s,3);
    
}