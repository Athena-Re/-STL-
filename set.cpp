#include <iostream>
#include <set>
using namespace std;
int main(){
    //集合set：确定性（要么在要么不在），互异性（只有一个），有序性（从小到大）
    //底层：红黑树
    //补充：multiset：确定性，不互异性，有序性（从小到大）
    //unordered_set：确定性，互异性，无序性
    //增删查复杂度均为log2n
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(0);

    //基于范围的循环（C++11）
    for(auto ele : st){//auto可改为int
        cout << ele << " ";
    }
    cout << endl;
    //使用迭代器遍历
    for(set<int>::iterator it = st.begin(); it != st.end(); it++){
        cout << *it << " ";//*表示解引用
    }
    cout << endl;

    st.erase(2);//擦除掉2

    if(st.find(1) != st.end()){//如果找到了，返回指向1的迭代器，否则则返回尾迭代器
        cout << "yes" << endl;
    }

    cout << st.count(0) << endl;//返回1，因为有一个

    cout << st.size() << endl;//2
    st.clear();
    cout << st.empty() << endl;//1

    //没有下标用法
    //只读不能修改

    cout << *st.begin() << endl;//输出第一个元素

    return 0;

}