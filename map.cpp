#include <iostream>
#include <map>
#include <vector>

using namespace std;
int main(){
    //映射：提供对数时间的有序键值对结构，底层原理是红黑树
    //互异性：一个键只能出现一次；有序性：自动排序（字典序等）、
    //补充：multimap：键可以任意次；有序性
    //unordered_map：互异性，无序性
    //增删查复杂度均为log2n

    map<string, int> a;//填键值的参数，可以是vec<int>,char,string,int...
    a["ase"] = 3;
    a["sev"] = 4;
    a["shu"] = 2;

    cout << a["ase"] << endl;//3

    //遍历
    for(map<string,int>::iterator it = a.begin(); it != a.end(); ++it){
        cout << it->first << ' ' << it->second << endl;//分别为键，值，每一个键值对使用pile来存
    }
    //基于范围的循环
    for(auto ele : a){
        cout << ele.first << ' ' << ele.second << endl;
    }

    a["sev"] = 8;//支持直接修改

    cout << a["m"] << endl;//初值为0

    if(a.find("shu")!=a.end()){//查，参数为键
        cout << "yes" << endl;
    }

    if(a.find("m")!=a.end()){//刚才相当于初始化了
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }

    if(a.find("d")!=a.end()){//未初始化
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }

    a.erase("m");//擦除

    cout << a.count("ase") << endl; //由于互异性，只可能为0或1，这里是1

    cout << a.size() << endl;//3
    cout << a.empty() << endl;//0
    a.clear();

    //例题：统计单词出现次数
    map<string, int> counts;
    vector<string> words;
    words.push_back("baby");
    words.push_back("baby");
    words.push_back("some");
    words.push_back("dad");
    words.push_back("hello");
    words.push_back("hello");

    for(int i = 0; i < words.size(); i++){
        counts[words[i]]++;
    }

    for(auto ele : counts){
        cout << ele.first << " " << ele.second << endl;
    }


    return 0;

}