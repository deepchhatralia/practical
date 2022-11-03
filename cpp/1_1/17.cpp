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
    Student s1("Deep");
    cout<<"Name of student s1 : "<<s1.name<<endl;
    
    Student s2 = s1;
    cout<<"Name of student s2 : "<<s2.name;
}