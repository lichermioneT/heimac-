#include<iostream>
#include<string>
using namespace std;

class c1
{
    int m_a;
};

struct c2
{
    int m_a;
};


int main()
{
// struct 和 class 默认的权限不同
// struct默认权限是public
// class默认权限是private


    c1 c3;
    struct c2 c;
    c.m_a = 100;



    return 0;
}