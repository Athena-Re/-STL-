#include <iostream>
using namespace std;
int main(){
    //pair:二元组
    pair<int, int> p1 = make_pair(1, 2);//老式构造法
    pair<int, int> p2 = {1, 2};//C++11

    //判断相等
    if(p1 == p2){
        cout << "yes" << endl;
    }

    //三元组
    pair<pair<int, char>, char> p3 = {{3, 'a'}, 'b'};
    cout << p3.first.first << " " << p3.first.second << " " << p3.second << endl;





    return 0;

}