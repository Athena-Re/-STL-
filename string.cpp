#include <iostream>
// #include <bits/stdc++.h> 万能头文件
using namespace std;
int main(){
    string s1(10, 'a');
    cout << s1 << endl;

    //赋值
    string s2 = "aw";
    s2[0] = 'b';
    cout << s2 << endl;

    //判断等于，两字符串相连
    string s3 = "123", s4 =  "123";
    if (s3 == s4){
        cout << "yes" << endl;
    }
    cout << s3 + s4 << endl;
    s3 += "a";
    cout << s3 << endl;

    //取子串
    string s5 = "1234567";
    cout << s5.substr(3, 4) << endl;//从第三个开始取，取四个，4567

    //找字串，find的时间复杂度为o(n^2)
    cout << s5.find("345") << endl;// 返回首字符下标
    cout << s5.find("32") << endl;//返回string::npos
    if(s5.find("345") != string::npos){
        cout << "yes" << endl;
    }

    //类型转换
    string s6 = "123.123456";
    int x1 = stoi(s6);
    long long x2 = stoll(s6);
    float x3 = stof(s6);
    cout << x1 << " " << x2 << " " << x3 << " " << endl;
    
    int x = 1246;
    string s7 = to_string(x);

    //注意：尾接字符串要用+=而不是先+再=,因为先+会生成一个临时变量再赋给s
    string s8;
    for(int i = 0;i < 5e5; i++){
        s8 += 'a';
    }


    return 0;

}