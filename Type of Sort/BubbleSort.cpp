#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for (int i= 0; i<= n-1;i++ ){
        for(int j =0; j<=n-i-1; j++){
        if (arr[j] > arr[j+1] ){
        swap(arr[j+1], arr[j]);
        }
    }
}
}
int main() {
    int arr [] = { 12, 23 , 67, 10, 56, 44, 34 , 90};
    int n = 8;
    BubbleSort(arr, n);
    for(int i = 0; i <= n; i++){
        cout<< "\n Bubble Sort is : "<< arr[i] << " ";
    }
    return 0;
}
// For recursively
// void bubbleSort(int arr[], int n){
    // if(n==1) return;
   //  for(int i = 0; i< n-1; i++){
          //  if(arr[i] > arr[i+1]){
            //    swap(arr[i+1], arr[i]);
          //  }
  //  }
         //   bubbleSort(arr,n-1 );
// }

// int main() {
  // int arr[]= {19, 23,10,45,22,89,100};
  // int n = 7;
  // bubbleSort(arr, n);
  // for(int i =0; i<=n; i++){
  //     cout<<"BubBle Sort: "<< arr[i] <<"\n";
   // }

  //  return 0;
// }