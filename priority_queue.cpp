#include <iostream>
#include <queue>
using namespace std;
int main(){
    //优先队列：底层为二叉堆
    //每次插入元素后进行快排，假设元素数量为n，插入操作数量为k
    //每次快排时间复杂度：knlog2n
    
    //大顶堆:升序
    priority_queue<int> pque;
    pque.push(1);
    pque.push(4);
    pque.push(3);
    pque.push(2);
    cout << pque.top() << endl;
    pque.pop();
    cout << pque.top() << endl;

    //小顶堆:降序
    priority_queue<int, vector<int>, greater<int>> pque1;
    pque1.push(1);
    pque1.push(4);
    pque1.push(3);
    pque1.push(2);
    cout << pque1.top() << endl;
    pque1.pop();
    cout << pque1.top() << endl;

    //不能访问内部元素！！！



    return 0;

}