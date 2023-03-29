#include <iostream>

using namespace std;

struct A
{
    ~A() {    //默认析构函数不能抛出一行  也就是 noexcept(true)
        throw 1;
    }
};


struct B
{
    ~B() noexcept(false) { //可以抛出异常
        throw 1;
    }
};

struct C
{
    B b;
};

int  funA() {A a;}
int  funB() {B b;}
int  funC() {C c;}


int main()
{
    try {
        funB();
    } catch (...) {
        cout << "caught funB." << endl; //caught funB.
    }

    try {
        funC();
    } catch (...) {
        cout << "caught funC." << endl;//caught funC.
    }

    try {
        funA();
    } catch (...) {
        cout << "caught funA." << endl;//terminate called after throwing an instance of 'int'
    }


    return 0;
}
