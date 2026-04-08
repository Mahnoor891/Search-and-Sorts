#include<iostream>
using namespace std;
void InsertionSort(int arr[], int n){
    for(int i =1; i< n; i++){
        int key = arr[i];
        int j = i-1; // Moving left
        while(j>= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--; //Moving backward after inserting value on right
        }
        arr[j+1] = key;

    }
}
int main() {
    int arr [] = {23, 56,12,78, 89,100,45,67};
    int n = 8;
    InsertionSort(arr, n);
    cout<<"Insertion Sort: ";
    for(int i =0; i< n; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}