#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[], int p, int q, int r){ // p = low
                                            // q = mid
                                            // r = high
    //Dividing the array into two subarrays
    int n1= q-p+1; // left subarray size
    int n2= r-q; // right subarray size

    //Now Create a dynamic memory allocation to copies these subarrays into it:
    vector<int> L(n1);
    vector<int> M(n2);

    //Using for loop to store thhe elements
    for(int i =0; i<n1; i++){
        L[i] = arr[p+i];
    }
    for(int j =0; j<n2; j++){
        M[j] = arr[q+1+j];
    }

    // Now preserve the index postions for further use:
    int i = 0; // for left sub array
    int j = 0; //for right sub array
    int k = p; // for main array
    
    // Now store the sorted elements into their correct position from subarray to main array
    while(i<n1 && j < n2){
        if(L[i]<= M[j]){ // For decending order write if as : l[i]>= M[j]
            arr[k] = L[i];
            i ++;
        }
        else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    // If elements are in either of subarray then copy them into main array
    if(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    if(j<n2){
        arr[k] = M[j];
        j++;
        k++;
    }
}
// Now create the actual function of merge sort 
void mergesort(int arr[], int left, int right){
    if(left< right){// base case
        //create a mid point
        int mid = left + (right- left)/2;
        mergesort(arr, left, mid); // For left sub array
        mergesort(arr, mid+1, right); // For right sub array
        // For merging the sorted sub arrays
        merge(arr, left, mid, right);

    }
}
void PrintArray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i] << " ";
    }
}
int main(){
    int arr[] = {12,67,23,45,10,98,56,44};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting: ";
    PrintArray(arr, n);
    mergesort(arr, 0, n-1);
    cout<<"\nAfter Sorting: ";
    PrintArray(arr,n);
    return 0;
}