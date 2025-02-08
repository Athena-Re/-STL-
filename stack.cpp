#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<double> stk;
    stk.push(1.0);
    stk.push(1.4);
    cout << stk.size() << endl;
    cout << stk.empty() <<endl;
    stk.pop();
    cout << stk.top() << endl;
    //没有stk.clear();

    //不能访问内部元素！！！
    return 0;

}