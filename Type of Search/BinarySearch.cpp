#include <iostream>
using namespace std;
int main() {
    int l =0 , r = 9;
    int mid , flag =0;
    int input[] = {12,13,14,56,89,90,100,228,321,778};
    int Tosearch = 56;
    while(l <=r) {
        mid = (l+r)/2;
        if(Tosearch ==input[mid]) {
            cout<<"Value found at :"<< mid;
            flag =1;
            break; 
        }
        else if (Tosearch >input[mid]) {
            l = mid +1;
        }
        else {
        r = mid - 1;
        }  
    }
    if(!flag) {
        cout<<"Value not found";
    }
    return 0;
}
