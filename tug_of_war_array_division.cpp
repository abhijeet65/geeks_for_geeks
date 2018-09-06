#include <iostream>
#include<cmath>
using namespace std;

void tugOfWar(int* weight, int n, bool curr[], int select, bool sol[], int &diff, int sum, int total, int pos) {
   if (pos == n)     //when the pos is covered all weights
      return;
   if ((n/2 - select) > (n - pos))    //left elements must be bigger than required result
      return;
   tugOfWar(weight, n, curr, select, sol, diff, sum, total, pos+1);

   select++;
   total += weight[pos];
   curr[pos] = true;      //add current element to the solution

   if (select == n/2) {       //when solution is formed
      if (abs(sum/2 - total) < diff) {     //check whether it is better solution or not
         diff = abs(sum/2 - total);
         for (int i = 0; i<n; i++)
            sol[i] = curr[i];
      }
   } else {
      tugOfWar(weight, n, curr, select, sol, diff, sum, total, pos+1);
   }
   curr[pos] = false;    //when not properly done, remove current element
}

void findSolution(int *arr, int n) {
   bool* curr = new bool[n];
   bool* soln = new bool[n];
   int diff = INT_MAX;       //set minimum difference to infinity initially
   int sum = 0;

   for (int i=0; i<n; i++) {
      sum += arr[i];                  //find the sum of all elements
      curr[i] =  soln[i] = false;     //make all elements as false
   }

   tugOfWar(arr, n, curr, 0, soln, diff, sum, 0, 0);
   cout << "Left: ";

   for (int i=0; i<n; i++)
      if (soln[i] == true)
         cout << arr[i] << " ";
   cout << endl << "Right: ";

   for (int i=0; i<n; i++)
      if (soln[i] == false)
         cout << arr[i] << " ";
}

int main() {
   int weight[] = {3, 4, 5, -3, 100, 1, 89, 54, 23, 20};
   int n = 10;
   findSolution(weight, n);
}