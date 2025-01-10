#include<iostream>
#include<string>
using namespace std;

// 权限
// 公共  public       成员在 类内可以访问  类外可以访问
// 保护  protected    成员在 类内可以访问  类外不可以访问  继承时可以访问
// 私有  private      成员在 类内可以访问  类外不可以访问  继承时不可以访问
class person
{
public:
    string name;

protected:
    string car;

private:
    int password;

public:
    // 类里面访问
    void func()
    {
        name = "lic";
        car = "推拉镜";
        password = 100;
    }

protected:
    // 类里面访问  
    void func2()
    {
        name = "lic";
        car = "推拉镜";
        password = 100;
    }

private:
    // 类里面访问
    void func3()
    {
        name = "lic";
        car = "推拉镜";
        password = 100;
    }  

};

int main()
{

    person p1;
    p1.name = "licz";
    p1.func();  











    return 0;
}