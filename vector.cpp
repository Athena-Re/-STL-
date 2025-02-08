#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vector数组
    vector<int> arr1;
    vector<int> arr2(100);//构造长度为100的一维数组
    vector<int> arr3(100, 1);//赋初值为1
    vector<int> arr4{1,8,7,1,0};
    vector<vector<int>> dp1(5, vector<int> (6, 10));//5行6列二维数组，初值100
    vector<vector<int>> dp2(5, vector<int> ());//不指定列数
    vector<vector<vector<int>>> dp3(5, vector<vector<int>> (6, vector<int> (4)));//相当于三维数组
    vector<pair<int, int>> arr{{1,9}, {2,9},{8,1},{0,0}};
    int n=10, m=10;
    vector<vector<int>> mat(n + 10, vector<int> (m + 10));//可以动态指定m和n的大小，但不能不指定

    //用法
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    cout << "arr.size():" << arr.size() << endl;
    
    //遍历方法1
    cout << "arr:" ;
    for(auto ele : arr)
        cout << ele << " ";
    cout << endl;
    
    arr.pop_back();
    
    cout << "arr:" ;
    for(auto ele : arr)
        cout << ele << " ";
    cout << endl;

    cout << "arr.empty():" << arr.empty() << endl; //0
    arr.resize(1);//重新指定大小为1的数组，只保留第一个数
    arr.resize(5, 10);//指定大小为5的数组，已有的数不变，其余值为10

    //遍历方法2
    cout << "arr:" ;
    for(int i = 0;i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    //遍历方法3
    cout << "arr:" ;
    for(vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";
    cout << endl;

    //反迭代+r
    cout << "倒序arr:" ;
    for(vector<int>::reverse_iterator it = arr.rbegin(); it != arr.rend(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "arr.back():" << arr.back() << endl; //最后一个

    //arr.clear();
    
    //提前制定长度：如果长度确定，就直接在构造函数使指定长度，而不是一个一个push_back，因为vector额外内存
    //耗尽后的时间重分配是由时间开销的，直接指定长度就不会重分配
    //错误示例：一个一个
    /*vector<int> a; 
    for (int i = 0; i < 1e8; i++){
        a.push_back(i);
    }*/
    //正确：直接分配
    vector<int> a;
    for (int i = 0; i < 1e8; i++){
        a.push_back(i);
    }

    //迭代器用法
    //尾迭代器指向的内容无意义，是最后一个元素的后面
    cout << *arr.begin() << endl;//头迭代器
    cout << *(arr.begin() + 2) << endl;//后移2次
    cout << arr.end() - arr.begin() << endl;//两迭代器距离，这里是元素个数，是整形数据，不需要解引用
    cout << *prev(arr.end()) << endl;//返回前一个迭代器，最后一个元素
    cout << *next(arr.begin()) << endl;//返回后一个迭代器


    return 0;
}