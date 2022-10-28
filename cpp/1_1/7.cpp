#include <iostream>
using namespace std;

class Person {
    public:
        string name = "deep";
};

class Student : public Person {
    public:
        int rollNo;
        
        void getData(){
            cout<<"Roll Number : "<<this->rollNo<<endl;
            cout<<"Name : "<<this->name<<endl;
        }
};

int main() {
    Student s;
    
    cout<<"Enter your roll number : ";
    cin>>s.rollNo;
    cout<<"Enter your name : ";
    cin>>s.name;
    
    s.getData();

    return 0;
}