#include <iostream>
using namespace std;

int main() {
    int kb;
    
    cout<<"Enter file size (in kb) : ";
    cin>>kb;
    
    cout<<"It will take "<<(kb*1024)/960<<" seconds to transmit the file.";
        
    return 0;
}