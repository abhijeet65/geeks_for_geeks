
// CPP program to invert actual bits 
// of a number. 
#include <bits/stdc++.h> 
using namespace std; 
  
void invertBits(unsigned int n) 
{ 
    // calculating number of bits 
    // in the number
    int c,m;
    
  for(c=0;c<32;c++)
  {
      m=1<<c;
          n=n ^ (m);
      
  }
    cout<<n<<endl;
} 
  
// Driver code 
int main() 
{ 
    int q;
    cin>>q;
    while(q--){
     long long int n;
        cin>>n;
    invertBits(n);
    }
    return 0; 
} 