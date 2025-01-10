#include<iostream>
#include<string>
using namespace std;

const double pi = 3.14;

// 创建一个类
class circle
{
    //访问权限
public:
    // 属性
    int m_r;

    //行为 一般是函数
    double cal()
    {
        return 2 * pi * m_r;
    }
};


class student
{
public:
    int id;
    string name;
    void print_info()
    {
        cout<< id <<endl;
        cout<< name <<endl;
    }

};


int main()
{

    // 创建一个对象
    // 通过类创建一个对象的过程
    circle c1;

    // 调用成员属性 和成员方法
    c1.m_r = 10;
    // cout<< "圆的周长" << c1.cal() <<endl;


    // 创建对象
    student s1;

    // 调用成员变量和属性
    s1.id = 1024;
    s1.name = "lichermionex";
    s1.print_info();






    return 0;
}