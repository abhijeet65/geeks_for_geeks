// C++ program to find maximum integer possible by
// doing at-most K swap operations on its digits.
#include <bits/stdc++.h>
using namespace std;
 
// function to find maximum integer possible by
// doing at-most K swap operations on its digits
void findMaximumNum(string str, int k, string& max)
{
    // return if no swaps left
    if(k == 0)
        return;
 
    int n = str.length();
     
    // consider every digit
    for (int i = 0; i < n - 1; i++)
    {
      
        // and compare it with all digits after it
        for (int j = i + 1; j < n; j++)
        {
            // if digit at position i is less than digit
            // at position j, swap it and check for maximum
            // number so far and recurse for remaining swaps
            if (str[i] < str[j])
            {
                // swap str[i] with str[j]
                swap(str[i], str[j]);
 
                // If current num is more than maximum so far
                if (str.compare(max) > 0)
                    max = str;
 
                // recurse of the other k - 1 swaps
                findMaximumNum(str, k - 1, max);
 
                // backtrack
                swap(str[i], str[j]);
            }
        }
    }
}
 
// Driver code
int main()
{
    string str = "129814999";
 
    int k = 4;
 
    string max = str;
    findMaximumNum(str, k, max);
 
    cout << max << endl;
 
    return 0;
}
