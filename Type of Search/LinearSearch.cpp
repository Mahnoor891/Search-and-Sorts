#include<iostream>
using namespace std;
int main() {
    // Simple case
    int i = 0, flag = 0;
    int inputnum[8] = {23,66,34, 21, 78, 42,31,27};
    int tosearch = 21;
    for(i = 0; i< 8; i++) {
        if(inputnum[i] == tosearch){
            flag=1;
            cout<<"Value found at: "<<i;
            break;
        
        }
    }
        if (flag == 0) {
            cout<<("Value not found");
        }

    
    return 0;   
}
