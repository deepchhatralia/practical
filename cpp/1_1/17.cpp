#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        Student(string name){
            this->name = name;
        }
};

int main(){
    string name;
    cout<<"Enter name : ";
    cin>>name;
    
    Student s1(name);
    cout<<"Name of student s1 object : "<<s1.name<<endl;
    
    Student s2 = s1;
    cout<<"Name of student s2 object : "<<s2.name;
}