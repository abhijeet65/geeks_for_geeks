#include <bits/stdc++.h>

using namespace std;
int offset(char c)
{
    return(c-'a');
}

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {

    int n1=a.length();
    int n2=b.length();
   int i;
    int str1[26]={0},str2[26]={0};
    for(i=0;i<n1;i++){
        str1[offset(a[i])]++;
       
    }
    for(i=0;i<n2;i++)
    {
         str2[offset(b[i])]++;
    }
    int diff=0;
    for(i=0;i<26;i++)
        diff+=abs(str1[i]-str2[i]);
    
return diff;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
