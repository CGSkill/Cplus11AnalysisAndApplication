#include <iostream>
using namespace std;

void Throw() {throw 1;}
void NoBlockThrow() {Throw();}
void BlockThrow() noexcept {Throw();}



////
/// \brief main
/// \return
/// Throw 函数 抛出异常
/// NoBlockThrow 会让Throw函数抛出异常继续抛出 直到main中的catch语句将其捕获
/// BlockThrow 函数直接调用std::terminate中断程序的执行从而阻止异常的继续传播
///
///
/// noexcept 修饰的函数通过std::terminate的调用来结束程序的执行方式会带来很多问题
/// 1.无法保证对象的析构函数的正常调用。
/// 2.无法保证栈的自动释放
/// 但很多时候暴力地终止整个程序确实是很简单有效的方法
///
///
///
///
///
int main()
{
    try{
        Throw();
    }
    catch(...){
        cout << "Found throw." <<endl;   //Found throw.
    }

    try {
        NoBlockThrow();
    }catch (...) {
        cout << "Throw is not blocked." <<endl; //Throw is not blocked.
    }


    try {
        BlockThrow(); //terminate called after throwing an instance of 'int'
    }catch(...){

        cout << "Found throw  1." << endl;
    }



    return 0;
}
