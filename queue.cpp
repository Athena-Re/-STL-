#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    cout << que.front() << endl;
    cout << que.back() << endl;

    que.pop();

    cout << que.size() << endl;

    cout << que.empty() << endl;

    //不能访问内部元素！！！

    return 0;

}