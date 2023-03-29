#include <iostream>

using namespace std;

//定义一个函数模板


///
/// 模板可以有默认参数,默认参数遵循函数参数的从右到左的初始化顺序
///
template <typename T> void TempFun(T a) {
    cout  << a  << endl;
}

template <typename T1,typename T2 = int >  class DefClass1;
//template <typename T1 = int,typename T2 >  class DefClass2; //无法通过编译


int main()
{
    TempFun(1);
    TempFun("1");


    return 0;
}
