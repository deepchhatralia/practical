#include <iostream>
using namespace std;

class Vector {
    public:
        int x, y, z;
        
        Vector(int x = 10, int y = 10, int z = 10){
            this->x = x;
            this->y = y;
            this->z = z;
        }
        
        Vector operator +(Vector v){
            Vector tmp;
            tmp.x = this->x + v.x;
            tmp.y = this->y + v.y;
            tmp.z = this->z + v.z;
            return tmp;
        }
};

int main() {
    Vector v1(10, 20 ,30);
    Vector v2(20, 10, 15);
    Vector v3;
    
    v3 = v1 + v2;
    cout<<"Added value of object X and Y : "<<v3.x<<", "<<v3.y<<", "<<v3.z;

    return 0;
}