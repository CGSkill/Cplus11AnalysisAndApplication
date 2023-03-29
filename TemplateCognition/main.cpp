#include <iostream>
#include <typeinfo>

using namespace std;


template <typename T> class Test {

public:
    friend T ;
    void getTname() {
        cout  << "this is  Test" << endl;
    }

private:
    int  a = 10;
    int  b = 20;
};



struct B;

struct A
{
    A() {}
    void  fun (){
        Test<A> t;
        cout  << "this is A " << t.b << endl;
        Tb.b = 30;
        cout  << "this is A " << Tb.b << endl;
    }
public:
    Test<A> Tb;
};


struct B
{
    B() {}
    void  fun (){
        cout  << "this is B" << endl;
    }
};

int main()
{
    A a;
    Test<A> test;
    test.getTname();
    a.fun();

    return 0;
}
