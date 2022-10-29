#include <iostream>
using namespace std;

class Student {
    public:
        string name;
};

int main() {
    int l = 2;
    Student s[l];
    
    for(int i = 0 ; i < l ; i++){
        cout<<"Enter name of student "<<i+1<<" : ";
        cin>>s[i].name;
    }
    
    for(int i = 0 ; i < l ; i++){
        cout<<"Name of student "<<i+1<<" : "<<s[i].name<<endl;
    }
    
    return 0;
}