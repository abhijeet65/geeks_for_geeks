Below is C++ implementation. It uses next_permutation function in C++.

/*  C++ code to generate all possible strings
    that can be formed from given string */
#include<bits/stdc++.h>
using namespace std;
 
void printAll(string str)
{
    /* Number of subsequences is (2**n -1)*/
    int n = str.length();
    unsigned int opsize = pow(2, n);
 
    /* Generate all subsequences of given strint.
       using counter 000..1 to 111..1*/
    for (int counter = 1; counter < opsize; counter++)
    {
        string subs = "";
        for (int j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
            if (counter & (1<<j))
                subs.push_back(str[j]);
        }
 
        /* Print all permutations of current subsequence */
        do
        {
            cout << subs << " ";
        }
        while (next_permutation(subs.begin(), subs.end()));
    }
}
 
// Driver program
int main()
{
    string str = "abc";
    printSubsequences(str);
    return 0;
}
