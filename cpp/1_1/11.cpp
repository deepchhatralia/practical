#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;
    int **ptp = &ptr;
    
    cout<<*ptr<<endl;
    cout<<**ptp;
    
    return 0;
}