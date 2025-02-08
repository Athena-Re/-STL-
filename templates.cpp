#include <iostream>
using namespace std;
//函数模板，打印时不需要说明数据类型
template <typename T>
T square(T x) { 
    return x*x;
}

//类模板，需要说明数据类型
template<typename T>
class BoVector {
    T arr[1000];
    int size;
public:
    BoVector():size(0) {}
    void push(T x) { 
        arr[size] = x; 
        size++; 
    }
    void print () const {
        for(int i=0; i<size ; i++) {
            cout << arr[i] << endl;
        } 
    }

};
int main(){
    cout << square<int>(5) << endl;
    cout << square(5.5) << endl;

    BoVector<int> bv;
    bv.push(2);
    bv.push(5);
    bv.push(8);
    bv.push(9);
    bv.print();


    return 0;
}