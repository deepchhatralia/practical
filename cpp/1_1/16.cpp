#include <iostream>
using namespace std;

class Student {
    public:
        string hobbies[2];
};

int main() {
    Student s1;
    
    for(int i = 0 ; i < 2 ; i++){
        cout<<"Enter your hobby : ";
        cin>>s1.hobbies[i];
    }
    
    cout<<"Your hobbies : ";
    for(int i = 0 ; i < 2 ; i++){
        cout<<s1.hobbies[i]<<" ";
    }
    
    return 0;
}