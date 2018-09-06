// C++ program for above implementation
#include <bits/stdc++.h>
#define Mod 1000000007
using namespace std;
 
// Function to find the maximum sum
long long int findSum(int arr[], int n)
{
    long long int sum = 0;
 
    // Sort the array first
    sort(arr, arr + n);
 
    // First multiply negative numbers pairwise
    // and sum up from starting as to get maximum 
    // sum. 
    int i = 0;
    while (i < n && arr[i] < 0) {
        if (i != n - 1 && arr[i + 1] <= 0) {
            sum = (sum + (arr[i] * arr[i + 1]) % Mod) % Mod;
            i += 2;
        }
        else
            break;
    }
 
    // Second multiply positive numbers pairwise
    // and summed up from the last as to get maximum 
    // sum.
    int j = n - 1;
    while (j >= 0 && arr[j] > 0) {
        if (j != 0 && arr[j - 1] > 0) {
            sum = (sum + (arr[j] * arr[j - 1]) % Mod) % Mod;
            j -= 2;
        }
        else
            break;
    }
 
    // To handle case if positive and negative
    // numbers both are odd in counts.
    if (j > i)
        sum = (sum + (arr[i] * arr[j]) % Mod) % Mod;
 
    // If one of them occurs odd times
    else if (i == j)
        sum = (sum + arr[i]) % Mod;
 
    return sum;
}
 
// Drivers code
int main()
{
    int arr[] = { -1, 9, 4, 5, -4, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findSum(arr, n);
    return 0;
}
