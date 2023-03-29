#include <iostream>

using namespace std;

template <typename T> class X{};
template <typename T> void TempFun(T t){}
struct A {} a;
struct
{
    int i;
} b; // b是匿名类型变量

typedef struct {int  i;} B; //B 是匿名类型

void Fun()
{
    struct  C{
    } c;    //c是局部变量

    X<A> x1;
    X<B> x2;
    X<C> x3;
    TempFun(a);
    TempFun(b);
    TempFun(c);

}


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
