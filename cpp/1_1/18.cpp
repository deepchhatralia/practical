#include <iostream>
using namespace std;

template <typename D>
D findGreater(D x, D y){
    return x > y ? x : y;
}

int main() {
    cout<<"Added 2 integer numbers : "<<findGreater<int>(10,20)<<endl;
    cout<<"Added 2 double numbers with same function : "<<findGreater<double>(2.4,4.4);

    return 0;
}