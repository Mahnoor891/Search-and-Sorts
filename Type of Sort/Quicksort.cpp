#include<iostream>
using namespace std;
const int size = 10;
int arr[10];
int pivot ;
int i;
// Inserting values in the array
void insert(){
    for ( i = 0; i <10; i++){
        cin>>arr[i];
    }
}
void display() {
    cout<<"\n Array is: ";
    for(int i = 0; i<10 ; i++){
        cout<<arr[i] << "  " ;
    }
    cout<<endl;
} 
   int partition(int left, int right){
    pivot =arr[(left+ right)/2];
    while(left<= right){
        while(arr[left] < pivot)
            left++;
            while (arr[right] > pivot)
            right--;

            if(left<= right){
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
        return left;
    }
void QuickSort(int left, int right) {
    if(left >= right) {  
        return;
    }                      // base case: stop when 1 element
        int pivotIndex = partition(left, right);  // pivot is now at correct position
        QuickSort(left, pivotIndex - 1);   // sort left part
        QuickSort(pivotIndex , right);  // sort right part
    }
int main() {
    int data;
    int choice;
    int left = 0;
    int right = 10 -1;
    while (true){
    cout<<"\n1 Insert";
    cout<< "\n2 Sort";
    cout<<"\n3 Display";
    cout<<"\n4 Exit";
    cout<< "\nEnter your choice: ";
    cin>> choice;
    switch (choice){
        case 1: 
        cout<< "\nEnter the value to be inserted: ";
        insert();
        break;
    
    case 2:
    QuickSort(left, right);
    cout<<"\n sorting done ";
    break;

    case 3:
    display();
    break;

    case 4: 
    return 0;

    default: 
    cout<<"\n Invalid choice";

    }
}
return 0;

}
  
    