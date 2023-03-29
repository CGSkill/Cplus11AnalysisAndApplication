#include <iostream>

using namespace std;

class DCExcept
{
public:
    DCExcept(double d)  //委派构造函数
    try: DCExcept(1,d){
        cout << "Run ths body." << endl;
    }
    catch(...) {
        cout << "caught exception."  << endl;
    }

private:
    DCExcept(int i,double d) {   //目标构造函数
        cout << "going to throw!" << endl;
        throw 0;
    }
    int type;
    double data;
};



////
/// \brief main
/// \return
/// 打印结果
/// going to throw!
/// caught exception.
/// terminate called after throwing an instance of 'int'
///
/// 目标构造函数中抛出了异常，委派构造函数的函数体部分的代码并没有被执行，
/// 这样设计是合理的，因为如果函数体依赖于目标构造函数构造的结果，那么当
/// 目标构造函数发生异常的情况下，还是不要执行委派构造函数函数体中的代码为好
///
///
///
///
int main()
{
    DCExcept  a(1.2);
    //cout << "Hello World!" << endl;
    return 0;
}
