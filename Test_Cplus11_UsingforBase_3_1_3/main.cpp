#include <iostream>

using namespace std;

struct Base
{
    Base() {}
    void f(double i) {
        cout << "Base : " << i  << endl;
    }
};

struct Derived : Base
{
    Derived() {}

    using Base::f;

    void f(int i){
        cout << "Derived : " << i << endl;
    }

};

//-------------------------------------华丽的分割线-----------------------------------

struct A
{
    A(int i) {
        cout << "A(int i):" << i;
    }
    A(double d,int i) {
         cout << "A(double d,int i):" << i;
    }
    A(float d,int i, const char* c) {}
};

struct B : A     //B没有默认构造函数
{
    using A::A; //继承 构造函数

    virtual void  ExtraInterface(){}

};


int main()
{

    Base b;
    b.f(123);  //Base : 123

    Derived d;
    d.f(3.5);  //Base :3.5


    B  testB(2.5,1) ; //调用A的构造函数 A(double d,int i):1


    return 0;
}
