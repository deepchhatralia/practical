#include <iostream>
using namespace std;

class Student {
    public:
        static int totalStudents;
        
        Student(){
            totalStudents++;
        }
};

int Student::totalStudents = 0;

int main() {
    Student s1, s2, s3, s4;
    
    // cout<<"Total number of object created : "<<Student::totalStudents;
    cout<<"Total number of object created : "<<s1.totalStudents;
    
    return 0;
}