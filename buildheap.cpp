void heapify(int arr[], int n, int j)  {
    int i = n-1;
    while(i>j) {
        if (i%2 == 0) {
            if (arr[(i-2)/2] < max(arr[i], arr[i-1])) {
                if (arr[i] < arr[i-1]) swap(arr[(i-2)/2], arr[i-1]);
                else swap(arr[(i-2)/2], arr[i]);
            }
            i -= 2;
        } else {
            if (arr[(i-1)/2] < arr[i]) swap(arr[(i-1)/2], arr[i]);
            i -= 1;
        }
    }
}

void buildHeap(int arr[], int n)  { 
    int i = n-1;
    while(i>0) {
        if (i%2 == 0) {
            if (arr[(i-2)/2] < max(arr[i], arr[i-1])) {
                if (arr[i] < arr[i-1]) swap(arr[(i-2)/2], arr[i-1]);
                else swap(arr[(i-2)/2], arr[i]);
            }
            i -= 2;
        } else {
            if (arr[(i-1)/2] < arr[i]) swap(arr[(i-1)/2], arr[i]);
            i -= 1;
        }
}
}