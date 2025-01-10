#include<iostream>
#include<string>
using namespace std;

class student
{
    // 权限
public:

    // 属性
    string name;
    int id;

    // 行为
    void show_info()
    {
        cout<< "姓名:" << name <<endl;
        cout<< "id:" << id <<endl;
    }

    // 行为给属性赋值
    void set_name(string ch)
    {
        name = ch;
    }

    void set_id(int i)
    {
        id = i;
    }


};



int main()
{
     
    // student s1;
    // s1.id = 1024;
    // s1.name = "lic";
    // s1.show_info();


    // student s2;
    // s2.id = 1024;
    // s2.name = "lic";
    // s2.show_info();

    student s3;
    s3.set_name("lic");
    s3.set_id(1024);
    s3.show_info();

// 成员变量 成员属性
// 成员函数 成员方法





    return 0;
}