#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    //第二位从小到大，也就是如果a<b，那么就是true，就是a在b前面
    if(a.second != b.second){
        return a.second < b.second;//0或1，小于为0
    }
    //如果第二位相同，则第一位从大到小，也就是如果a>b，那么就是true，就是b在a前面
    return a.first > b.first;
}
int gcd(int x, int y){
    if(!y)//y等于0
        return x;
    return gcd(y, x%y);
}
int lcm(int a, int b){
    return a / gcd(a, b) * b;
}
int main(){
    //交换函数swap
    int a = 1, b = 2;
    swap(a, b);
    cout << a << " " << b << endl;
    cout << endl;

    //排序函数sort
    vector<int> arr{1,9,8,1,0};
    sort(arr.begin(), arr.end());//两参数，第一个是起始位置，第二个是终止位置，升序
    for(int i = 0;i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr.begin(), arr.end(), greater<int>());//降序
    for(int i = 0;i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //第二个数从小到大排，一样则第一个从大到小排
    vector<pair<int, int>> arr1{{1,9}, {2,9},{8,1},{0,0}};
    sort(arr1.begin(), arr1.end(), cmp);
    for (auto ele : arr1) {
        cout << ele.first << ' ' << ele.second << " ";
    }
    cout << endl;
    //注意，sort函数的比较函数中，相等的两个元素通常要返回false，比如上面的比较函数cmp中
    //不能出现return a.second <= b.second;
    cout << endl;

    //二分查找：lower_bound和upper_bound
    /*起始条件：首先确定数组的左右边界，通常为数组的第一个元素和最后一个元素。
    中间值：找到当前范围的中间元素，并与目标元素进行比较。
    如果中间元素与目标元素相等，则查找成功，返回该元素的索引。
    如果目标元素小于中间元素，则目标元素可能在中间元素的左侧，于是将搜索范围缩小为中间元素左侧的部分。
    如果目标元素大于中间元素，则目标元素可能在中间元素的右侧，于是将搜索范围缩小为中间元素右侧的部分。
    */
    //lower_bound：寻找>=x的第一个元素的位置
    //upper_bound：寻找>x的第一个元素的位置
    //注意由于是二分法必须有序（增或者减）
    //返回的是迭代器，如果要下标，就减去头迭代器即可
    vector<int> arr2{1,4,5,7,9};
    int pos1 = lower_bound(arr2.begin(), arr2.end(), 7) - arr2.begin();
    cout << pos1 << endl;//3

    int pos2 = upper_bound(arr2.begin(), arr2.end(), 7) - arr2.begin();
    cout << pos2 << endl;//4

    int pos3 = lower_bound(arr2.begin()+2, arr2.end(), 1) - arr2.begin();
    cout << pos3 << endl;//2

    cout << endl;

    //逆序
    vector<int> arr3{1,4,5,7,9};
    reverse(arr3.begin(), arr3.end());//左闭右开
    for(auto ele : arr3){
        cout << ele << " ";
    }
    cout << endl;
    reverse(arr3.begin()+2, arr3.begin()+4);
    for(auto ele : arr3){
        cout << ele << " ";
    }
    cout << endl;
    cout << endl;

    //最大最小值
    cout << min({1,2,3,4,6}) << endl;//注意大括号

    //去重函数unique
    //消除数组重复相邻元素，数组长度不变，但是有效数据缩短（比如最后一个元素成为无效数据）
    //返回有效数据的尾迭代器
    //[1,2,2,4,5,6]->[1,2,4,5,6,?]，尾迭代器在问号上面
    //例：删除所有重复元素并使得所有数据均有效
    vector<int> arr4{1,3,4,2,4,5,3};
    sort(arr4.begin(), arr4.end());
    arr4.erase(unique(arr4.begin(), arr4.end()), arr4.end());//erase的两个参数表示从第一个参数位置删除到第二个参数位置
    //unique使得[1,2,3,3,4,4,5]->[1,2,3,4,5,*,?],*为当前迭代器位置
    for(auto ele : arr4){
        cout << ele << " ";
    }
    cout << endl;
    cout << endl;

    //数学函数：多有函数均支持int，long long，float，double，long double
    //绝对值abs
    cout << abs(-1.0) << endl;//1
    //e^x
    cout << exp(2) << endl;//e^2,7.38906
    //lnx
    cout << log(3) << endl;
    //x^y
    cout << pow(3, 2) << endl;
    cout << pow(8, 1.0 / 3) << endl;//注意是1.0 / 3,不是1 / 3,否则结果就会整除运算，是0
    //x开根
    cout << sqrt(2) << endl;
    //向上取整
    cout << ceil(2.1) << endl;
    //向下取整
    cout << floor(2.3) << endl;
    //四舍五入取整数
    cout << round(2.49) << endl;
    //注意：以下写法更加稳妥，否则可能出错
    //1.a/b向下取整，别用floor(1.0 * a/b)，要用a/b
    //2.a/b向上取整，别用ceil(1.0 * a/b)，要用(a + b - 1) / b
    //3.根号x向下取整，别用(int)sqrt(a)，用二分查找
    //4.a^b,别用pow(a,b),用快速幂
    //5.log2 a向下取整，用__lg(a)(两个下划线)
    cout << __lg(2) << endl;//1
    cout << endl;

    //最大公因数gcd，最小公倍数lcm,在C++17才可用
    //int x = gcd(8, 12);//4
    //int y = lcm(8, 12);//24
    
    int x = gcd(8, 12);//4
    cout << x << endl;

    int y = lcm(8, 12);//24
    cout << y << endl;



    return 0;

}