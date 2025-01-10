#include<iostream>
#include<string>
using namespace std;

// 成员属性私有
class person
{
public:
    // 设置姓名
    void setname(string ch)
    {
        name = ch;
    }


    string getname()
    {
        return name;
    }

    int getage()
    {
        return age;
    }

    void setage(int num)
    {
        if(num < 0 || num > 150)
        {
            cout<< "年龄有误 赋值失败" <<endl;
            return;
        }
    }

    void setidol(string idol)
    {
        idol = idol;
    }

private:
    string name;  
    int age = 18;
    string idol;
};

int main()
{
    person p1;

    // 可以查看和修改
    p1.setname("lic");
    string ch = p1.getname();
    cout<< ch <<endl;

    // 可以查看
    int num = p1.getage();
    cout<< num <<endl;
    p1.setage(180);

    //可以写；
    p1.setidol("lics");














    return 0;
}
