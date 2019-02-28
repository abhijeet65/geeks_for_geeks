#include<bits/stdc++.h>

using namespace std;
void printsets(int a[],int pos,int index,int k,int currvec[])
{
	if(pos >= k)
	{
		for(int i=0;i<k;i++)
			cout<<currvec[i]<<" ";
		cout<<endl;
		
		return;
	}
	if(index>=sizeof(a))
		return;
	else
	{
		
			currvec[pos]=a[index];
			printsets(a,pos+1,index+1,k,currvec);
			printsets(a,pos,index+1,k,currvec);
	}
}

void combinationUtil(int arr[], int n, int r, int index, 
                     int data[], int i) 
{ 
    // Current cobination is ready, print it 
    if (index == r) { 
        for (int j = 0; j < r; j++) 
            printf("%d ", data[j]); 
        printf("\n"); 
        return; 
    } 
  
    // When no more elements are there to put in data[] 
    if (i >= n) 
        return; 
  
    // current is included, put next at next location 
    data[index] = arr[i]; 
    combinationUtil(arr, n, r, index + 1, data, i + 1); 
  
    // current is excluded, replace it with next 
    // (Note that i+1 is passed, but index is not 
    // changed) 
    combinationUtil(arr, n, r, index, data, i + 1); 
} 

int main(){
	int n,i;
	cout<<"Entre the number of elemnts in array\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int currvec[10];
	cout<<"Enter the size of each set";
	int set;
	cin>>set;
	combinationUtil(a,n,set,0,currvec,0);
}
