#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function(s) below*/

stack<int> s1;


void push(int a)
{
     //add code here.
     if(s.empty() || a <= s.top())
     {
         s.push(a);
     
     }
     else
     {
         while(a > s.top())
         {
             int t=s.top();
             s1.push(t);
             s.pop();
             
         }
         s.push(a);
         while(!s1.empty())
         {
             int t=s1.top();
             s.push(t);
             s1.pop();
         }
     }
     
}
bool isFull(int n)
{
     //add code here.
     if(s.size()==n)
     return true;
     else
     return false;
}
bool isEmpty()
{
    //add code here.
    if(s.size()==0)
    return true;
    else
    return false;
    
}
int pop()
{
    //add code here.
    int t=s.top();
    s.pop();
    return(t);
}
int getMin()
{
   //add code here.
   int t=s.top();
   return t;
}