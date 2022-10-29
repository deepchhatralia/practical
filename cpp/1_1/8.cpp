#include <iostream>
using namespace std;

class Student {
    public:
        static int totalStudents;
        
        Student(){
            totalStudents++;
        }
        
        static int getTotalStudents(){
            return totalStudents;
        }
};

int Student::totalStudents = 0;

int main() {
    Student s1, s2, s3, s4;
    
    // cout<<"Total number of object created : "<<Student::getTotalStudents();
    cout<<"Total number of object created : "<<s1.getTotalStudents();
    
    return 0;
}