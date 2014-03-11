#include <iostream> 
using namespace std; 

int main() { 
    const int length = 10;
    int iarr[length] = {0}; 

    for(int i = 0; i < length; i++) 
        cout << iarr[i] << " "; 
    cout << endl; 

    for(int i = 0; i < length; i++) 
        iarr[i] = i; 

    for(int i = 0; i < length; i++) 
        cout << iarr[i] << " "; 
    cout << endl; 
 
    return 0; 
}
