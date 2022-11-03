#include <iostream>
using namespace std;

class Student {
    public:
        int rollNo, age;
        string name;
        
        class Subject {
            public:
                int cpp = 30, java = 40, python = 10;
        }
}

int main() {
    Student s1[3];
    Student Subject sub;
    
    for(int i = 0 ; i < 3 ; i++){
        cout<<"Name of student "<<i+1<<" : ";
        cin>>s1[i].name;
        cout<<"Roll Number of student "<<i+1<<" : ";
        cin>>s1[i].rollNo;
        cout<<"Age of student "<<i+1<<" : ";
        cin>>s1[i].age;
        cout<<
    }

    return 0;
}