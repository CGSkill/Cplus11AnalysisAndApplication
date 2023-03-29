#include <iostream>

using namespace std;


////
/// \brief The TestStruct struct
/// 初始化成员列表使用__func__预定义标识符是可行的
/// 但__func__作为函数参数的默认值是不被允许的
/// void FuncFail(string func_name = __func__ ){}；//  由于参数声明时，__func__还未被定义   gcc 编译不通过 qmake 能够编译

struct TestStruct {
    TestStruct():name(__func__){

    }
    const char* name;

};

///
/// \brief FuncFail
/// \param func_name
/// /home/cg/GitHub/C++11AnalysisAndApplication/Test_Cplus11_func_2_1_3/main.cpp:20: warning: ‘__func__’ is not defined outside of function scope
/// 20 | void FuncFail(string func_name = __func__ ){}
///    |                                  ^~~~~~~~
///

void FuncFail(string func_name = __func__ ){

    cout << func_name << endl;
}

int main()
{
    TestStruct ts;
    cout << ts.name   << endl;
    //FuncFail();
    return 0;
}
