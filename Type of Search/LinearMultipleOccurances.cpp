#include <iostream>
using namespace std;
int main() {
    // Simple case
    int i = 0, flag = 0;
    int size = 10;
    int inputnum[] = {23, 34,66, 66, 66, 21, 78, 42,31,27};
    int search = 66;
    
    for(i = 0; i< 10; i++) {
        if(inputnum[i] == search){
            flag=1;
            cout<<"Value found at: "<< i <<endl;
        
        }
    }
        if (flag== 0) {
            cout<<("Value not found");
        }

    
    return 0;
}
